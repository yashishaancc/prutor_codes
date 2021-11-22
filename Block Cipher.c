#include<stdio.h>
#include<math.h>
int main()
{
    long n,k,b,a,i,j,c,d;
    scanf("%ld%ld",&n,&k);
    b=(long)log10(n)/k+1;
    printf("%ld\n",b);
    for(i=0;i<b;i++){
        a=n/(long)pow(10,k*b-k-k*i)%(long)pow(10,k);
        c=(a+a%10)%(long)pow(10,k);
        d=(long)log10(c)+1;
        for(j=0;j<k-d;j++){
            if(i==0) 
                break;
            printf("0");
        }
        printf("%ld",c=(a+a%10)%(long)pow(10,k));
    }
    
    //  Insert your code here.
    
    return 0;
}
