#include<stdio.h>
#include<math.h>
int main()
{
    long m,n,i;
    scanf("%ld%ld",&m,&n);
    printf("%ld%ld%ld\n",m%10,m/10%10,m/100%10);
    for(i=0;i<n;i++){
        printf("%ld",m/(long)pow(10,i)%10);
    }
    //  Insert your code here.
    
    return 0;
}
