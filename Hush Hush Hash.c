#include<stdio.h>
#include<string.h>
int main()
{
    char str[500];
    gets(str);
    int i,l=strlen(str),h1=0,h2=1;
    for(i=0;i<l;i++){
        if(str[i]>='0'&&str[i]<='9')str[i]+=-'0';
        if(str[i]>='A'&&str[i]<='Z')str[i]+=-'A'+1;
        if(str[i]>='a'&&str[i]<='z')str[i]+=-'a'+1;
        h1+=str[i];
        h2=h2*str[i]%100000;
    }
    printf("%d\n%d",h1,h2);
    
    //  Insert your code here.
    
    return 0;
}
