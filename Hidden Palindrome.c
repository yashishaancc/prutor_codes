#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    gets(s);
    int l=strlen(s),i,j,k,f,p=1,p1=0,p2=0;
    for(i=0;i<l;i++){
        for(j=i;j<l;j++){
            f=1;
            for(k=i;k<=j;k++){
                if(s[k]!=s[i+j-k])f=0;
            }
            if(f==1){
                if(j-i+1>p){
                    p=j-i+1;
                    p1=i;
                    p2=j;
                }
            }
        }
    }
    printf("%d\n%d\n%d",p,p1,p2);
    
    //  Insert your code here.
    
    return 0;
}
