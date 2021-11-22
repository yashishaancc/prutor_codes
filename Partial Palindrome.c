#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    gets(str);
    int i,l=strlen(str),c,d,j,f;
    for(i=l/2;i<l;i++){
        c=0;
        d=0;
        for(j=1;j<l-i;j++){
            if(str[i+j-1]==str[i-j])d++;
            if(str[i+j]==str[i-j])c++;
        }
        if(c==l-i-1){
            f=2;
            break;
        }
        if(d==l-i-1){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("%d\n",i-l+i);
        for(j=0;j<2*i;j++){
            if(j<=i)printf("%c",str[j]);
            else printf("%c",str[2*i-j-1]);
        }
    }
    if(f==2){
        printf("%d\n",i-l+i+1);
        for(j=0;j<2*i+1;j++){
            if(j<=i)printf("%c",str[j]);
            else printf("%c",str[2*i-j]);
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
