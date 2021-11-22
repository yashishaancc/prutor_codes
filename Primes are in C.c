#include<stdio.h>

int main()
{
    int n,d=0,i,f,s=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=0;
        if(n%i==0){
            d++;
            if(i==2)f=1;
            if(i>2){
                f=1;
                for(j=2;j<i;j++){
                    if(i%j==0){f=0;break;}
                }
            }
        }
        s=(f==1)?s+i:s;
    }
    printf("%d\n%d",d,s);
    
    //  Insert your code here.
    
    return 0;
}
