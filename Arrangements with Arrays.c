#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==1){
            for(j=0;j<a[i];j++){
                printf("%d",a[i]);
                (j!=a[i]-1)?printf(" "):0;
            }
        }
        else{
            for(j=0;j<b[i];j++){
                printf("%d",a[i]);
                (j!=b[i]-1)?printf(" "):0;
            }
        }
        (i!=n-1)?printf("\n"):0;
    }
    
    //  Insert your code here.
    
    return 0;
}
