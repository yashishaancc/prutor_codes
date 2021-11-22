#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    scanf("%dx^2 +%dx +%d",&a,&b,&c);
    d=b*b-4*a*c;
    (d>=0)?printf("Real\n"):printf("Complex\n");
    printf("%d\n",d);
    float r1=((float)-b+sqrt(d))/(2*a),r2=((float)-b-sqrt(d))/(2*a);
    (d>=0)?printf("%.3f\n%.3f",r1,r2):0;
    float r3=-(float)b/(2*a);
    float r4=sqrt(-(float)d)/(2*a);
    if(d<0){
        printf("%.3f+%.3fi\n%.3f-%.3fi",r3,r4,r3,r4);
    }
    
    // Write your code here
    
    return 0;
}
