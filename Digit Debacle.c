#include <stdio.h>
#include <math.h>

int main(){
    long n,k,s=0,i;
    scanf("%ld %ld",&n,&k);
    long l=log10(n)+1;
    printf("%ld\n",l);
    for(i=1;i<=k&&l>=i;i++){
        int a=(int)(n/(double)pow(10,l-i))%10;
        s+=a;
    }
    (s>k*k)?printf("YES"):printf("NO");
    //  Write your code here.
    
    return 0;
}
