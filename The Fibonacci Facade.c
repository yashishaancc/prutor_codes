#include<stdio.h>

int main()
{
    long n,f,e,d;
    scanf("%ld",&n);
    if(n<1){
        printf("INVALID INPUT");
    }
    else{
        for(int i=1;i<=n;i++){
            f=1;
            for(int j=1;j<=i;j++){
                e=f;
                f=(j==1)?0:f+d;
                d=e;
                (j==i)?printf("%ld",f):printf("%ld ",f);
            }
            (i==n)?0:printf("\n");
        }
    }
    //  Insert your code here.
    
    return 0;
}
