#include<stdio.h>

double f(float x,int p,int q,int r,int s){
    return p*x*x*x+q*x*x+r*x+s;
}

int main()
{
    int p,q,r,s,a,b,n,i;
    scanf("%d%d%d%d%d%d%d",&p,&q,&r,&s,&a,&b,&n);
    double area=0,dx=(double)(b-a)/n;
    for(i=0;i<n;i++){
        area+=((f(a+i*dx,p,q,r,s)+f(a+(i+1)*dx,p,q,r,s))/2)*dx;
    }
    printf("%.4lf",area);
    
    //  Insert your code here.
    
    return 0;
}
