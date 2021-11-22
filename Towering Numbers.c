#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=2*i-1;
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(;j<=n+i-1;j++){
            printf("%d",(j<=n)?j:2*n-j);
        }
        (i!=n)?printf("\n"):0;
    }
    
    //  Insert your code here.
    
    return 0;
}
