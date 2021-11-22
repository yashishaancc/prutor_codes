#include<stdio.h>
#include<math.h>

double f(double x,int c[],int n){
    int i;
    double ans=0;
    for(i=0;i<n;i++){
        ans+=c[i]*pow(x,i);
    }
    return ans;
}

double fd(double x,int c[],int n){
    int i;
    double ans=0;
    for(i=1;i<n;i++){
        ans+=i*c[i]*pow(x,i-1);
    }
    return ans;
}

double get(double x0,int c[],int n,double eps,int*cp){
    *cp++;
    if(*cp==100)return 10;
    double x1=x0-f(x0,c,n)/fd(x0,c,n);
    if(fabs(x1-x0)<eps)return x1;
    return get(x1,c,n,eps,cp);
}

int main()
{
    int n,i,cc=0;
    double eps,x0;
    scanf("%d%lf",&n,&eps);
    n+=1;
    int c[n];
    for(i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    scanf("%lf",&x0);
    double ans=get(x0,c,n,eps,&cc);
    printf("%.2lf",ans);
    
    //  Insert your code here.
    
    return 0;
}
