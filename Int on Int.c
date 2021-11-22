#include<stdio.h>
#include<math.h>
int main()
{
    long s=0,n,k,i;
    scanf("%ld%ld",&n,&k);
    for(i=1;i<=5;i++){
        s+=pow(i,k);
    }
    printf("%ld\n",s);
    s=0;
    for(i=1;i<=n;i++){
        s+=pow(i,k);
    }
    printf("%ld\n",s);
    
    //  Insert your code here.
    
    return 0;
}
