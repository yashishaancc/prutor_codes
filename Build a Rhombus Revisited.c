#include <stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d",m);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=n;j>=i;j--){
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}
