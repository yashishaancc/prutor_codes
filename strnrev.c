#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[1000];
    gets(a);
    int n,i;
    scanf("%d",&n);
    if(n==0)puts(a);
    else{
        if(n>strlen(a))printf("ILLEGAL");
        else{
            for(i=0;i<n;i++){
                b[i]=a[n-i-1];
            }
            for(i=n;i<strlen(a);i++){
                b[i]=a[i];
            }
            puts(b);
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
