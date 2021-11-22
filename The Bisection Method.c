#include<stdio.h>
#include<math.h>

float f(float x,int*c,int n){
    int i;
    float ans=0;
    for(i=0;i<n;i++){
        ans+=(float)c[i]*pow(x,i);
    }
    //printf("for %.2f is %.2f\n",x,ans);
    return ans;
}

float find(float a,float b,int*c,int n,float eps){
    //printf("In find a=%.2f,b=%.2f\n",a,b);
    float m=(a+b)/2;
    if(f(m,c,n)==0)return m;
    else if((b-a)<=eps)return (a+b)/2;
    else if(f(a,c,n)*f(m,c,n)<0)return find(a,m,c,n,eps);
    else return find(m,b,c,n,eps);
}

int main()
{
    int n,i;
    float a,b,eps;
    scanf("%d %f %f %f",&n,&a,&b,&eps);
    //printf("n=%d,a=%.2f,b=%.2f,eps=%.2f\n",n,a,b,eps);
    n+=1;
    int c[n];
    for(i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    //printf("Function is ");
    //for(i=0;i<n;i++){
    //    printf("%dx%d ",c[i],i);
    //    if(i==n-1)printf("\n");
    //}
    if(f(a,c,n)==0){
        if(f(b,c,n)==0){
            if(a<b)printf("%.2f",a);
            else printf("%.2f",b);
        }
        else printf("%.2f",a);
    }
    else if(f(b,c,n)==0)printf("%.2f",b);
    else if(f(a,c,n)*f(b,c,n)>0)printf("INVALID INPUT");
    else{
        if(b>a)printf("%.2f",find(a,b,c,n,eps));
        else printf("%.2f",find(b,a,c,n,eps));
    }
    
    //  Insert your code here.
    
    return 0;
}
