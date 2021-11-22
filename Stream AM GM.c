#include<stdio.h>
#include<math.h>
int main()
{
    double n,i=0,s=0,p=1;
    scanf("%lf",&n);
    if(n==-1){
        printf("EMPTY STREAM\nEMPTY STREAM");
    }
    else{
        while(n!=-1){
            i++;
            s+=n;
            p*=n;
            scanf("%lf",&n);
        }
        printf("%.4lf\n",s/i);
        (p<0)?printf("INVALID INPUT"):printf("%.4lf",pow(p,1/i));
    }
    //  Insert your code here.
    
    return 0;
}
