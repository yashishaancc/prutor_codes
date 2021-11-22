#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i=0,c=0,s[1000],f=0;
    str[i]=getchar();
    while(str[i]!=EOF){
        if(str[i]=='.'||str[i]=='?'||str[i]=='!'){
            s[c]=i;
            c++;
        }
        i++;
        str[i]=getchar();
    }
    int l=strlen(str);
    for(i=(c>1)?s[c-2]+1:0;i<l;i++){
        if(str[i]!=' '&&str[i]!='\n'&&str[i]!='\t')f=1;
        if(f==1)printf("%c",str[i]);
    }
    
    //  Insert your code here.
    
    return 0;
}
