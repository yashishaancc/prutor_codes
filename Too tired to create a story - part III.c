#include<stdio.h>
void genStrings(char*str,int k,int done){
    if(done==k){
        puts(str);
        return;
    }
    if(done==0){
        str[done]='0';
        genStrings(str,k,done+1);
        str[done]='1';
        genStrings(str,k,done+1);
    }
    else{
        if(str[done-1]=='0'){
            str[done]='1';
            genStrings(str,k,done+1);
        }
        else{
            str[done]='0';
            genStrings(str,k,done+1);
            str[done]='1';
            genStrings(str,k,done+1);
        }
    }
}
int main()
{
    int k;
    scanf("%d",&k);
    char str[k+1];
    str[k]='\0';
    genStrings(str,k,0);
    
    //  Insert your code here.
    
    return 0;
}
