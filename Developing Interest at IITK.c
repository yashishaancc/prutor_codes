#include <stdio.h>
int main(){
    int principal, intRate;
    // Read in the principal amount and the interest rate
    scanf("%d %d", &principal, &intRate);
    //printf("%d\n%d",principal*(100+2*intRate)/100,principal*(100+2*intRate)*(100+intRate)*(100+intRate)/1000000);
    
    // Calculate the loan amount after 2 years
    // Also calculate the loan amount after 4 years
    long int balTwoYears, balFourYears;
    balTwoYears=principal*(100+2*intRate)/100;
    balFourYears=(long)principal*(100+2*intRate)*(100+intRate)*(100+intRate)/1000000;
    printf("%ld\n%ld",balTwoYears,balFourYears);
    
    // Insert your code here
    
    return 0;
}
