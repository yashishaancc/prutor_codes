#include <stdio.h>
#include <math.h>

int main(){
    double x,k,a,b=0,i;
    scanf("%lf%lf",&x,&k);
    a=x-x*x/2+x*x*x/3;
    for(i=1;i<=k;i++){
        b+=pow(-1,i+1)*pow(x,i)/i;
    }
    printf("%.4lf\n%.4lf",a,b);
    
    //  Write your code here.
    
    return 0;
}
