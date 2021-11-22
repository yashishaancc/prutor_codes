#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        k=(2*i+1<=n)?2*i+1:2*n-2*i-1;
        for(j=0;j<(n-k)/2;j++){
            printf(" ");
        }
        for(;j<(n+k)/2;j++){
            printf("%d",a[j]);
        }
        (i!=n-1)?printf("\n"):0;
    }
    
    //  Insert your code here.
    
    return 0;
}
