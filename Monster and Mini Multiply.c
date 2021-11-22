#include<stdio.h>
int main(){
    int a[41],b[41],x,i,t=0,s,c[41];
    for(i=0;i<40;i++){
        a[39-i]=getchar()-'0';
    }
    b[39]=getchar()-'0';
    for(i=0;i<40;i++){
        b[39-i]=getchar()-'0';
    }
    x=getchar()-'0';
    scanf("%d",&x);
    for(i=0;i<40;i++){
        s=a[i];
        a[i]=a[i]*x%10+t;
        t=s*x/10;
    }
    a[40]=t;
    b[40]=0;
    t=0;
    for(i=0;i<41;i++){
        c[i]=(a[i]+b[i]+t)%10;
        t=(a[i]+b[i]+t)/10;
    }
    t=0;
    for(i=40;i>=0;i--){
        if(c[i]!=0)t=1;
        if(t==1||i==0)printf("%d",c[i]);
    }
    return 0;
}
