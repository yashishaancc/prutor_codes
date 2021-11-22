#include<stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<2*m+1;i++){
        if(i%2==1){
            for(j=0;j<2*n+1;j++){
                (j%2==0)?printf("0"):printf("#");
            }
            printf("\n");
        }
        else{
            for(j=0;j<2*n+1;j++){
                printf("0");
            }
            (i!=2*m)?printf("\n"):0;
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
