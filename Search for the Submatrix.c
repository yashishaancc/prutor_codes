#include<stdio.h>

int main()
{
    int n,m,i,j,k,l,o,p,c,f=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&k,&l);
    int b[k][l],d[100],e[100];
    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n-k+1;i++){
        for(j=0;j<m-l+1;j++){
            c=0;
            for(o=0;o<k;o++){
                for(p=0;p<l;p++){
                    if(b[o][p]==a[i+o][j+p])c++;
                }
            }
            if(c==k*l){
                d[f]=i;
                e[f]=j;
                f++;
            }
        }
    }
    if(f==0)printf("SUBMATRIX NOT PRESENT");
    else{
        for(i=0;i<f;i++){
            printf("(%d, %d)",d[i],e[i]);
            if(i<f-1)printf("\n");
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
