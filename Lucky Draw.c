#include<stdio.h>

int main()
{
    int a[7],i,j,k,f,t;
    for(i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for(k=7;k>4;k--){
        for(i=0;i<7;i++){
            f=0;
            for(j=0;j<7;j++){
                if(a[i]>=a[j]){
                    f++;
                }
            }
            if(f==k){
                t=a[i];
                a[i]=a[7-k];
                a[7-k]=t;
                break;
            }
        }
    }
    for(i=0;i<7;i++){
        printf("%d",a[i]);
        (i!=6)?printf(" "):0;
    }
    
    //  Insert your code here.
    
    return 0;
}
