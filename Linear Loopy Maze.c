#include<stdio.h>

int main()
{
    int n,i,k=0,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    while(i!=n-1&&k<=n){
        if(i>=n){
            f=1;
            break;
        }
        i=a[i];
        k++;
    }
    if(f==1){
        printf("BAD %d",i);
    }
    else{
        if(i==n-1){
            printf("EXIT %d",k+1);
        }
        else{
            printf("TRAP");
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
