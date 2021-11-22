#include<stdio.h>
#include<math.h>

int main(){
    int m,v,e,p;
    scanf("%d,%d,%d,%d",&m,&v,&e,&p);
    double f1,f2,f3,f4;
    f1=p*p+(double)1*m/(sqrt(v)+e);
    f2=f1*f1+(double)2*m/(sqrt(v)+e);
    f3=f2*f2+(double)3*m/(sqrt(v)+e);
    f4=f3*f3+(double)4*m/(sqrt(v)+e);
    printf("%.3f\n%.3f\n%.3f\n%.3f",f1,f2,f3,f4);
    
    //  Insert your code here.
    
    return 0;
}
