#include<stdio.h>
void print(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1)printf(" ");
    }
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]>a[i]){
                int temp=a[i],k=j;
                for(j=i;j>k;j--){
                    a[j]=a[j-1];
                }
                a[k]=temp;
                break;
            }
        }
        print(a,n);
        if(i!=n-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
