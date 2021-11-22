#include<stdio.h>

int main()
{
    int m,n,i,j,k;
    scanf("%d%d",&m,&n);
    int u[m][m],s[m][n],v[n][n],a[m][n],b[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j)scanf("%d",&s[i][j]);
            else s[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&u[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&v[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=0;
            for(k=0;k<m;k++){
                a[i][j]+=u[i][k]*s[k][j];
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=0;
            for(k=0;k<n;k++){
                b[i][j]+=a[i][k]*v[j][k];
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",b[i][j]);
            if(j<n-1)printf(" ");
        }
        if(i<m-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
