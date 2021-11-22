#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    scanf("(%d,%d) (%d,%d) (%d,%d) (%d,%d)",&a,&b,&c,&d,&e,&f,&g,&h);
    if(a!=c){
        float p=(float)(d-b)/(c-a);
        float q=(float)(-a)*p+b;
        printf("y = %.3fx + %.3f\n",p,q);
    }
    else{
        printf("x = %.3f\n",(float)a);
    }
    if(((c-a)*(f-d)==(d-b)*(e-c)&&(c-a)*(h-d)==(d-b)*(g-c))||(a==c&&a==e&&a==g)){
       printf("Both On The Line"); 
    }
    else if(((c-a)*(f-d)==(d-b)*(e-c)||(c-a)*(h-d)==(d-b)*(g-c))||(a==c&&(a==e||a==g))){
        printf("One On The Line");
    }
    else{
        if(((f-b)*(c-a)-(e-a)*(d-b))*((h-b)*(c-a)-(g-a)*(d-b))>0){
            printf("Together");
        }
        else{
            printf("Apart");
        }
    }
    return 0;
}
