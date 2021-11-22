#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,i;
    scanf("%d\n",&n);
    a=n/10;
    b=n%10;
    char str[100],al[27],t;
    gets(str);
    //puts(str);
    //printf("%d%d",a,b);
    for(i=0;i<26;i++){
        if(i%2==0)al[i]='A'+(i-2*a+26)%26;
        if(i%2==1)al[i]='A'+(i-2*b+26)%26;
    }
    al[26]='\0';
    int l=strlen(str);
    puts(al);
    for(i=0;i<13;i++){
        t=al[i];
        al[i]=al[25-i];
        al[25-i]=t;
    }
    puts(al);
    for(i=0;i<l;i++){
        if(str[i]>='A'&&str[i]<='Z')str[i]=al[str[i]-'A'];
    }
    puts(str);
    
    //  Insert your code here.
    
    return 0;
}
