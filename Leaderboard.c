#include<stdio.h>

int main()
{
    int n,m,i,j,k,r;
    scanf("%d",&n);
    int a[n+100];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m],c[m];
    for(i=0;i<m;i++)scanf("%d",&b[i]);
    for(i=0;i<m;i++){
        r=1;
        for(j=0;j<i+n;j++){
            if(b[i]>=a[j]){
                k=j;
                for(j=i+n;j>k;j--){
                    a[j]=a[j-1];
                }
                a[k]=b[i];
                break;
            }
            if(j==i+n-1)r++;
            else if(a[j]!=a[j+1])r++;
        }
        printf("%d",r);
        if(i!=m-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
