#include<stdio.h>
int main(){
    int n,i,j,m;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){printf("%d ",i);}
    }
    printf("%d\n",n);
    for(i=n;;i++){
        m=0;
        for(j=1;j<=i;j++){
            m=(i%j==0)?m+1:m;
        }
        if(m==n){printf("%d",i);break;}
    }
    return 0;
}
