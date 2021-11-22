#include<stdio.h>

int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        for(j=0;j<n;j++){
            printf("%d",a[j]);
            if(j!=n-1)printf(" ");
        }
        if(i!=n-2)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
