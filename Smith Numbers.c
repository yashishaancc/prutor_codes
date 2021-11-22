#include<stdio.h>

int main()
{
    
    int n,p,i,j,dig;//n and p are same
    int sum_digit_prime,no_fac,c_pow,sum_prime=0;//assume sumof digits of req. primes is0
    scanf("%d",&n);//read n
    p=n;//preserving value of n in p
    for(i=2;i<n;i++){
        if(n%i==0){//first i has to be divisible by n
            //now check if i is prime
            no_fac=0;//assume i  has no factors
            for(j=2;j<=i;j++){
                if(i%j==0)no_fac++;//count no. of factors of i using no_fac
            }
            if(no_fac==1){//if no. of factors of i is 1,i is prime
                c_pow=0;//assume power of i in n is 0
                sum_digit_prime=0;//assume sum of digits of i is 0
                dig=i;//preserving i in dig keep i undisturbed
                while(dig!=0){
                    sum_digit_prime+=dig%10;//find sum of digits of i
                    dig/=10;
                }
                while(p%i==0){
                    c_pow++;//count pow of prime no. i in n
                    p/=i;
                }
                sum_prime+=sum_digit_prime*c_pow;//update sum of prime
            }
        }
    }
    int sum_of_digits=0;//assume sum of digits of n is 0
    while(n!=0){
        dig=n%10;
        sum_of_digits+=dig;//find sum of digits of n
        n/=10;
    }
    if(sum_of_digits==sum_prime){//checking smith criteria
        printf("Smith Number");
    }
    else{
        printf("Not Smith Number");
    }
    
    return 0;
}
