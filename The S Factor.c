#include<stdio.h>
#include<math.h>

int main()
{
    
    long n,p,q,i;//n,p,q are same initially
    long count_3=0,count_1st_dig=0,count_pow=0;//assume 3 and 1st dig appears 0 times in n
    scanf("%ld",&n);//read n
    p=q=n;//preserving value of n for multiple uses 
    for(i=2;i<=n;i++){
        if(n%i==0){
            printf("%ld\n",i);//print smallest divisor of n
            break;
        }
    }
    while(p!=0){
        if(p%10==3)count_3++;//counting 3 in n using count_3
        p/=10;
    }
    printf("%ld\n",count_3);//print no. of times 3 appears in n 
    long a1=n/(long)pow((double)10,(int)log10(n));//extract 1st digit of n
    while(q!=0){
        if(q%10==a1)count_1st_dig++;//count no. of 1st digit using count_1st_dig
        q/=10;
    }
    printf("%ld\n",count_1st_dig);//print no. of times 1st digit appears in n
    while(n%i==0){
        count_pow++;//count power of smallest divisor of n using count_pow
        n/=i;
    }
    printf("%ld",count_pow);//print that power
    
    return 0;
}
