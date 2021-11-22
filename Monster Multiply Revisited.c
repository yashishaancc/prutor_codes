#include<stdio.h>
int main(){
    int a[50],b[50],i,j,s[100],p[100],t=0,f=0;
    for(i=0;i<50;i++){
        a[i]=getchar()-'0';
    }
    b[0]=getchar();
    for(i=0;i<50;i++){
        b[i]=getchar()-'0';
    }
    for(i=0;i<100;i++){
        s[i]=0;
        for(j=0;j<=i;j++){
            if(j<=49&&i-j<=49)s[i]+=a[49-j]*b[49-i+j];
        }
        p[i]=(s[i]+t)%10;
        t=(s[i]+t)/10;
    }
    for(i=0;i<100;i++){
        if(p[99-i]!=0||i==99)f=1;
        if(f==1)printf("%d",p[99-i]);
    }
    return 0;
}
