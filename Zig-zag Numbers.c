#include<stdio.h>

void f(int a[],int n,int k,int i,int s){
    int j;
    if(i==k){
        for(j=0;j<k;j++){
            printf("%d",a[j]);
        }
        printf("\n");
        return;
    }
    if(s==0){
        for(j=1;j<((i==0)?n+1:a[i-1]);j++){
            a[i]=j;
            f(a,n,k,i+1,1);
        }
    }
    else{
        for(j=a[i-1]+1;j<=n;j++){
            a[i]=j;
            f(a,n,k,i+1,0);
        }
        s=0;
    }
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[k];
    f(a,n,k,0,0);
    
    //  Insert your code here.
    
    return 0;
}
