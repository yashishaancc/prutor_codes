#include<stdio.h>
void set(int*a,int*b){
    if(*a>*b){
        int t=*a;
        *a=*b;
        *b=t;
    }
}
void print(int*a,int n){
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
    for(j=0;j<n;j++){
        if(j%2==0){
            for(i=1;i<n;i+=2){
                set(&a[i-1],&a[i]);
            }
        }
        else{
            for(i=2;i<n;i+=2){
                set(&a[i-1],&a[i]);
            }
        }
        print(a,n);
        if(j!=n-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
