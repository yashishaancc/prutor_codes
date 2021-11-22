#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    if(c<=a+b){
        (a==b||b==c)?((a==b&&b==c)?printf("Equilateral"):printf("Isosceles")):printf("Scalene");
    }
    else{
        printf("Invalid");
    }
    
    // Write your code here
    
    return 0;
}
