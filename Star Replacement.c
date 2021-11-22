#include<stdio.h>

int main()
{
    int n,i=0,j=0;
    char s[500],c,t[1000];
    s[i]=getchar();
    while(s[i]!='\n'){
        i++;
        s[i]=getchar();
    }
    n=i;
    scanf("%c",&c);
    for(i=0;i<n;i++){
        if(s[i]==c){
            t[j]='*';
            j++;
            t[j]='*';
            j++;
        }
        else{
            t[j]=s[i];
            j++;
        }
    }
    printf("%d\n%s",j,t);
    
    //  Insert your code here.
    
    return 0;
}
