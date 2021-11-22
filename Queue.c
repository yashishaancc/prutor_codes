#include<stdio.h>

int main()
{
    int n,i,t;
    scanf("%d\n",&n);
    int a[n],c=0;
    for(i=0;i<n;i++){
        a[i]=0;
    }
    char str[10];
    gets(str);
    while(str[0]!='X'){
        if(str[0]=='C'){
            if(c==0)printf("EMPTY\n");
            else if(c==n)printf("FULL\n");
            else printf("NOT EMPTY\n");
        }
        else if(str[0]=='D'){
            if(c>0){
                printf("%d\n",a[0]);
                a[0]=0;
                for(i=0;i<c-1;i++){
                    a[i]=a[i+1];
                }
                a[c-1]=0;
                c--;
            }
            else printf("EMPTY\n");
        }
        else if(str[0]=='E'){
            t=str[2]-'0';
            if(str[3]!='\0')t=str[3]-'0'+10*(str[2]-'0');
            if(str[4]!='\0')t=str[4]-'0'+10*(str[3]-'0')+100*(str[2]-'0');
            if(str[5]!='\0')t=str[5]-'0'+10*(str[4]-'0')+100*(str[3]-'0')+1000*(str[2]-'0');
            if(c<n){
                a[c]=t;
                c++;
            }
            else printf("FULL\n");
        }
        gets(str);
    }
    
    //  Insert your code here.
    
    return 0;
}
