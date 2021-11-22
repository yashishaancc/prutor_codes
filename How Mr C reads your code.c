#include<stdio.h>
#include<string.h>
struct Token{
    char c;
    char repetition;
};
void fillrps(struct Token*arr,char*rps,int*b,int j,int*k,int f){
            int i,plus=0,star=0,c=0,t=(f==0)?j:(j+1);
            for(i=*b;i<t;i++){
                if(arr[i].repetition=='+')plus++;
                else if(arr[i].repetition=='*')star++;
                else c+=arr[i].repetition-'0';
            }
            c=c+plus;
            if(c!=0){
                rps[(*k)++]=arr[*b].c;
                rps[(*k)++]=c+'0';
            }
            if(plus>0||star>0){
                rps[(*k)++]=arr[*b].c;
                rps[(*k)++]='*';
            }
            *b=j;
}
int check(char*rps,int lr,char*msg,int lm){
    int i,j=0,k;
    for(i=0;i<lr;i+=2){
        if(rps[i+1]=='*'){
            while(j<lm&&msg[j]==rps[i])j++;
        }
        else{
            for(k=0;k<rps[i+1]-'0';k++){
                if(k+j>=lm||rps[i]!=msg[k+j])return 0;
            }
            j+=rps[i+1]-'0';
        }
    }
    if(j!=lm)return 0;
    return 1;
}
int main(){
    char pattern[100],msg[100],rps[100];
    gets(pattern);
    gets(msg);
    int lp=strlen(pattern),lm=strlen(msg),i,j=0,b=0,k=0;
    struct Token arr[100];
    for(i=0;i<lp;i+=2){
        arr[j].c=pattern[i];
        arr[j].repetition=pattern[i+1];
        j++;
    }
    for(j=0;j<lp/2;j++){
        if(j!=0&&arr[j].c!=arr[j-1].c)fillrps(arr,rps,&b,j,&k,0);
        if(j==lp/2-1)fillrps(arr,rps,&b,j,&k,1);
    }
    rps[k]='\0';
    puts(rps);
    if(check(rps,k,msg,lm))printf("YES");
    else printf("NO");
    return 0;
}
