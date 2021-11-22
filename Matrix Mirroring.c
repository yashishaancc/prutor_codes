#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int num[n][m],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&num[i][j]);
            printf("%d ",num[i][j]);
        }
        for(j=m-1;j>=0;j--){
            printf("%d",num[i][j]);
            if(j!=0)printf(" ");
        }
        printf("\n");
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<m;j++){
            scanf("%d",&num[i][j]);
            printf("%d ",num[i][j]);
        }
        for(j=m-1;j>=0;j--){
            printf("%d",num[i][j]);
            if(j!=0)printf(" ");
        }
        if(i!=0)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
