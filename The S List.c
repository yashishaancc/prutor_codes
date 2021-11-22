#include<stdio.h>
#include<math.h>

int main()
{
    
    int n,i,j,no_of_fac,count_prime=0;//assume no. of req. primes is 0
    scanf("%d",&n);//read n
    int a[n];//array to store primes
    for(i=2;i<sqrt(n);i++){//take no. from 2 to <sqrt(n)
        //now we have to check if i is prime
        no_of_fac=0;//assume there are no factors of i
        for(j=2;j<=i;j++){
            if(i%j==0)no_of_fac++;//find no. of factors of i using no_of_fac
        }
        if(no_of_fac==1){//if no. of factors of i is 1,i is prime
            a[count_prime]=i;//store primes in array
            count_prime++;//count no. of primes using count_prime
        }
    }
    if(count_prime==0){
        printf("NO PRIMES");//print NO PRIMES if there is no prime
    }
    else{
        for(i=0;i<count_prime-1;i++){
            printf("%d ",a[i]);//print primes
        }
        printf("%d",a[count_prime-1]);//print last prime without trailing spaces
    }
    printf("\n");
    long nck,sum=0;//assume sum of nck is  for all prime k is 0
    for(i=0;i<count_prime;i++){
        long prod_num=1,prod_den=1;//assume num and den of nck is 1
        for(j=0;j<a[i];j++){
            prod_num*=n-j;//find num of nck
            prod_den*=j+1;//find den of nck
        }
        nck=prod_num/prod_den;//find nck
        sum+=nck;//find sum of nck's
    }
    printf("%ld",sum);//print required sum
    
    return 0;
}
