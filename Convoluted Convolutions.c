#include<stdio.h>

int main()
{
    int m,n,k,i,j,d,e;
    scanf("%d%d%d",&m,&n,&k);
    int a[m][n];
    float b[k][k],c[m][n],s=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            scanf("%f",&b[i][j]);
            s+=b[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(d=0;d<k;d++){
                for(e=0;e<k;e++){
                    c[i][j]+=b[d][e]*a[(i-k/2+d+m)%m][(j-k/2+e+n)%n];
                }
            }
            c[i][j]/=s;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",(int)c[i][j]);
            if(j<n-1)printf(" ");
        }
        if(i<m-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
