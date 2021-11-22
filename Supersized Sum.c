#include<stdio.h>
int main(){
    long m,n,i,num,s=0;
    scanf("%ld%ld",&m,&n);
    for(i=1;i<=n;i++){
        scanf("%ld",&num);
        s+=num%m;
    }
    s%=m;
    printf("%ld",s);
    return 0;
}
