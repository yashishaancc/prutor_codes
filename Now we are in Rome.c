#include<stdio.h>
#include<string.h>
int main()
{
    char c[16];
    gets(c);
    int l=strlen(c),i,sum=0,s[16];
    for(i=0;i<l;i++){
        if(c[i]=='I')s[i]=1;
        if(c[i]=='V')s[i]=5;
        if(c[i]=='X')s[i]=10;
        if(c[i]=='L')s[i]=50;
        if(c[i]=='C')s[i]=100;
        if(c[i]=='D')s[i]=500;
        if(c[i]=='M')s[i]=1000;
    }
    for(i=l-1;i>=0;i--){
        if(i<l-1){
            if(s[i]>=s[i+1])sum+=s[i];
            else sum-=s[i];
        }
        else sum+=s[i];
    }
    printf("%d",sum);
    
    //  Insert your code here.
    
    return 0;
}
