#include<stdio.h>

int main()
{
    int k,n,i,j;
    scanf("%d%d",&k,&n);
    int a[50];
    for(i=0;i<k;i++){
        a[i]=i;
    }
    for(i=k;i<n;i++){
        a[i]=0;
        for(j=i-1;j>=i-k;j--){
            a[i]+=a[j];
        }
    }
    if(n<=k){
        a[k]=0;
        for(j=0;j<k;j++){
            a[k]+=a[j];
        }
    }
    printf("%d %d",a[k],a[n-1]);
    
    //  Insert your code here.
    
    return 0;
}
