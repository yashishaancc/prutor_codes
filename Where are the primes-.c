#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r=0,i,f;
    scanf("%d",&n);
    d=(int)log10(n)+1;
    for(i=0;i<d;i++){
        r+=(n%(int)pow(10,i+1)/(int)pow(10,i))*(int)pow(10,(int)log10(n)-i);
    }
    d=fabs(n-r);
    printf("%d\n",d);
    while(1){
        d++;
        f=(d==1)?0:1;
        for(i=2;i<d;i++){
            if(d%i==0){
                f=0;
                break;
            }
        }
        if(f==1){
            printf("%d",d);
            break;
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
