#include<stdio.h>
int main(){
    float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r;
    
    scanf("%f%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    scanf("%f%f%f%f%f%f%f%f%f",&j,&k,&l,&m,&n,&o,&p,&q,&r);
    
    printf("%.2f %.2f %.2f\n",(float)a+j,(float)b+k,(float)c+l);
    printf("%.2f %.2f %.2f\n",(float)d+m,(float)e+n,(float)f+o);
    printf("%.2f %.2f %.2f\n",(float)g+p,(float)h+q,(float)i+r);
    printf("\n\n");
    printf("%.2f %.2f %.2f\n",(float)a*j+b*m+c*p,(float)a*k+b*n+c*q,(float)a*l+b*o+c*r);
    printf("%.2f %.2f %.2f\n",(float)d*j+e*m+f*p,(float)d*k+e*n+f*q,(float)d*l+e*o+f*r);
    printf("%.2f %.2f %.2f",(float)g*j+h*m+i*p,(float)g*k+h*n+i*q,(float)g*l+h*o+i*r);
    
    return 0;
}
