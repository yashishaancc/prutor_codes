#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        double a;
        scanf("%lf",&a);
        printf("Square\n%.3lf",a*a);
    }
    if(n==1){
        double a,b,c;
        scanf("%lf%lf%lf",&a,&b,&c);
        double s=(a+b+c)/2;
        printf("Triangle\n%.3lf",sqrt(s*(s-a)*(s-b)*(s-c)));
    }
    
    //  Write your code here.
    
    return 0;
}
