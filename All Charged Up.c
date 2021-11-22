#include<stdio.h>
int main(){
    int a,b,c,p,q,r;
    scanf("(%d,%d,%d)(%d,%d,%d)",&a,&b,&c,&p,&q,&r);
    int x1,y1,z1,x2,y2,z2,i,j,k;
    int c1=0,c2=0,c3=0,c4=0,l,m;
    x1=(a>p)?p:a;
    x2=(a>p)?a:p;
    y1=(b>q)?q:b;
    y2=(b>q)?b:q;
    z1=(c>r)?r:c;
    z2=(c>r)?c:r;
    for(i=x1;i<=x2;i++){
        for(j=y1;j<=y2;j++){
            for(k=z1;k<=z2;k++){
                m=1;
                for(l=2;l<i+j+k;l++){
                    if((i+j+k)%l==0){m=0;break;}
                }
                if(i==1||j==1||k==1||i==256||j==256||k==256){c1++;}
                else if(m==1){c2++;}
                else if(j*j-4*i*k>=0){c3++;}
                else{c4++;}
            }
        }
    }
    printf("%d\n%d\n%d\n%d\n%d",c1,c2,c3,c4,c1+c2+c3-c4);
    return 0;
}
