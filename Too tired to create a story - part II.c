#include<stdio.h>
#include<math.h>
float findsq(int n,float x,float eps){
    if(fabs(x-n/x)<eps)return x;
    x=(x+n/x)/2;
    return findsq(n,x,eps);
}
int main()
{
    int n,i;
    float eps,x=1;
    scanf("%d%f",&n,&eps);
    for(i=1;i<10;i++){
        if((2*pow(10,i))*(2*pow(10,i))>n){
            x=2*pow(10,i-1);
            break;
        }
    }
    printf("%.3f\n%.3f",x,findsq(n,x,eps));
    
    //  Insert your code here.
    
    return 0;
}
