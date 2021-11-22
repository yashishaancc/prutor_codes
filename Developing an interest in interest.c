#include<stdio.h>
#include<math.h>

int main(){
    int p,r,t1,t2,n;
    scanf("P =%d\nR =%d\nT1 =%d\nT2 =%d\nN =%d",&p,&r,&t1,&t2,&n);
    double i1,i2,i3,i4;
    i1=p*r*t1/100.0;
    i2=p*(1+r*t1/100.0)*(pow((1+r/(n*100.0)),t2*n)-1);
    i3=p*r*(t1+t2)/100.0;
    i4=p*(pow((1+r/(n*100.0)),(t1+t2)*n)-1);
    printf("%.3f\n%.3f\n%.3f\n%.3f",i1,i2,i3,i4);
    
    //  Insert your code here.
    
    return 0;
}
