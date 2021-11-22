#include<stdio.h>

// This function returns 1 if the input is a prime else 0
int check_prime(int n){
    if(n==2)return 1;
    if(n<2)return 0;
    for(int i=2;i<n;i++)
        if(n%i==0)return 0;
    return 1;
    // Write your code here
}

// This function returns the sum of all primes strictly less than the input
long prime_sum(int n){
    long s=0;
    for(long i=0;i<n;i++)
        if(check_prime(i))s+=i;
    return s;
	// Write your code here
}

int main(){
    int n, i;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++){
        scanf("%d", arr + i);
        printf("%ld", arr[i]*prime_sum(arr[i]));
        if(i < n-1) printf(" "); // No trailing spaces
    }

    return 0;
}
