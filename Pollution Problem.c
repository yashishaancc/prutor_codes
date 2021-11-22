#include<stdio.h>
#include<math.h>
int main(){
    float t,a,b,c,i=0;
    scanf("%f\nMonday:%f\nTuesday:%f\nWednesday:%f",&t,&a,&b,&c);
    printf("Monday: ");
    (a-1>=t)?printf("High\n",i++):printf("Low\n");
    printf("Tuesday: ");
    (b-a>=t)?printf("High\n",i++):printf("Low\n");
    printf("Wednesday: ");
    (c-b>=t)?printf("High\n",i++):printf("Low\n");
    (i<2)?printf("0.000"):printf("%.3f",sqrt((a*a+b*b+c*c)/3));
    return 0;
}
