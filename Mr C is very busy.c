#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    switch(n/10){
        case 2:printf("Twenty");break;
        case 3:printf("Thirty");break;
        case 4:printf("Forty");break;
        case 5:printf("Fifty");break;
        case 6:printf("Sixty");break;
        case 7:printf("Seventy");break;
        case 8:printf("Eighty");break;
        case 9:printf("Ninety");break;
    }
    switch(n%10){
        case 1:printf(" one");break;
        case 2:printf(" two");break;
        case 3:printf(" three");break;
        case 4:printf(" four");break;
        case 5:printf(" five");break;
        case 6:printf(" six");break;
        case 7:printf(" seven");break;
        case 8:printf(" eight");break;
        case 9:printf(" nine");break;
    }
    //  Write your code here.
    
    return 0;
}
