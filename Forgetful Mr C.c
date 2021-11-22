#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("B%d",&n);
    switch(n){
        case 1:printf("Monday TB 105");break;
        case 2:printf("Monday TB 106");break;
        case 3:printf("Monday TB 111");break;
        case 4:printf("Tuesday TB 112");break;
        case 5:printf("Tuesday TB 203");break;
        case 6:printf("Tuesday TB 204");break;
        case 7:printf("Thursday TB 205");break;
        case 8:printf("Thursday TB 206");break;
        case 9:printf("Thursday TB 207");break;
        case 10:printf("Wednesday TB 208");break;
        case 11:printf("Wednesday TB 209");break;
        case 12:printf("Wednesday TB 210");break;
        case 13:printf("Tuesday TB 211");break;
        case 14:printf("Wednesday TB 212");break;
        default:printf("Incorrect section!");
    }
    //  Write your code here.
    
    return 0;
}
