#include <stdio.h>
#include <math.h>

int main(){
    long p,q,n,l=1,a,b,i;
    scanf("%ld%ld%ld",&p,&q,&n);
    for(i=2;i<=(n+5);i++){
        a=l;
        l=(i==2)?p*l:p*l-q*b;
        b=a;
        (i==5)?printf("%ld\n",l):0;
        (i==n)?printf("%ld",l):0;
    }
    (n==0)?printf("0"):0;
    (n==1)?printf("1"):0;
    //  Write your code here.
    
    return 0;
}
