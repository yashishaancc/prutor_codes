#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=2*n;i++){
        for(j=1;j<=2*n;j++){
            if(i<=n&&j<=n){
                (i>j)?printf("%d",a[j-1]):printf("%d",a[i-1]);
            }
            if(i<=n&&j>n){
                (i>2*n+1-j)?printf("%d",a[2*n+1-j-1]):printf("%d",a[i-1]);
            }
            if(i>n&&j<=n){
                (2*n+1-i>j)?printf("%d",a[j-1]):printf("%d",a[2*n+1-i-1]);
            }
            if(i>n&&j>n){
                (2*n+1-i>2*n+1-j)?printf("%d",a[2*n+1-j-1]):printf("%d",a[2*n+1-i-1]);
            }
            (j!=2*n)?printf(" "):0;
        }
        (i!=2*n)?printf("\n"):0;
    }
    
    //  Insert your code here.
    
    return 0;
}
