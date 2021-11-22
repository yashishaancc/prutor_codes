#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%dx^2 + %dx + %d = 0",&a,&b,&c);
    printf("Discriminant: %.3f\n",(float)(b*b-4*a*c));
    printf("Extremum: %.3f\n",(float)-b/(2*a));
    printf("Sum: %.3f\n",(float)-b/a);
    printf("Difference: %.3f\n",(float)sqrt(b*b-4*a*c)/fabs(a));
    
    //  Insert your code here.
    
    return 0;
}
