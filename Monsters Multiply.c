#include <stdio.h>
#include<math.h>
int main(){
    long a,b,i,j,t=0,f=0;
    scanf("%ld * %ld",&a,&b);
    long c[38],d[38];
    for(i=0;i<38;i++){
        if(i>18)c[i]=(long)(a/(long)pow(10,37-i))%10;
        else c[i]=0;
        if(i>18)d[i]=(long)(b/(long)pow(10,37-i))%10;
        else d[i]=0;
    }
    long s[38],p[38];
    for(i=0;i<38;i++){
        s[i]=0;
        for(j=0;j<=i;j++){
            s[i]+=c[37-j]*d[37-i+j];
        }
        p[i]=(s[i]+t)%10;
        t=(s[i]+t)/10;
    }
    if((a<0||b<0)&&(a>0||b>0))printf("-");
    for(i=0;i<38;i++){
        if(p[37-i]!=0)f=1;
        if(p[37-i]<0)(f==0)?0:printf("%ld",-p[37-i]);
        else(f==0)?0:printf("%ld",p[37-i]);
    }
    return 0;
}
