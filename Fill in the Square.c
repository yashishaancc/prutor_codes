#include<stdio.h>

int main()
{
    int n,a,b,i,j;
    scanf("%d%d%d",&n,&a,&b);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((a+j-1>=0&&b+n-i>=0)||(a+j-1<0&&b+n-i<0))printf("0");
            else printf("1");
        }
        printf("\n");
    }
    //  Insert your code here.
    
    return 0;
}
