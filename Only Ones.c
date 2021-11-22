#include<stdio.h>

int main()
{
    int n,m,i,j,c=0,p=1,f=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)c++;
        }
    }
    printf("%d\n",c);
    if(c==0||c==1)printf("%d\n%d",c,c);
    else{
        for(i=2;i<c;i++){
            if(c%i==0){
                p=0;
                break;
            }
        }
        if(p)printf("1\n");
        else printf("0\n");
        int max=(n>m)?n:m;
        int min=(n<m)?n:m;
        for(p=c;p>=1;p--){
            for(i=1;i<=min;i++){
                for(j=1;j<=max;j++){
                    if(p==i*j){
                        f=1;
                        break;
                    }
                }
            }
            if(f){
                printf("%d",p);
                break;
            }
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
