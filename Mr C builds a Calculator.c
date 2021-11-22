#include <stdio.h>
#include <math.h>

int main(){
    double n,a,b;
    scanf("%lf%lf%lf",&n,&a,&b);
    switch((int)n){
        case 1:printf("%.4lf",a+b);break;
        case 2:printf("%.4lf",a-b);break;
        case 3:printf("%.4lf",a*b);break;
        case 4:printf("%.4lf",a/b);break;
        case 5:printf("%.4lf",pow(a,b));break;
        case 6:printf("%.4lf",sin(a));break;
        case 7:printf("%.4lf",cos(a));break;
        case 8:printf("%.4lf",fabs(a));break;
    }
    
    //  Write your code here.
    
    return 0;
}
