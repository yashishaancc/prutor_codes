#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,i,p,q,r;
    scanf("%dx + %dy + %d = 0\n%dx + %dy + %d = 0\n%dx + %dy + %d=0",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    p=e*i-h*f;
    q=d*i-f*g;
    r=d*h-e*g;
    printf("%d\n%d\n%d\n%d",e*i-h*f,d*i-f*g,d*h-e*g,a*p-b*q+c*r);
    
    //  Insert your code here.
    
    return 0;
}
