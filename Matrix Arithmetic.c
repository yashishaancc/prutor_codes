#include<stdio.h>

int main()
{
    int m,p;
    scanf("%d%d",&m,&p);
    int mat[m][m],i,j,pm[m][m],prev[m][m],run[m][m],k,l;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
            pm[i][j]=p*mat[i][j];
            printf("%d",pm[i][j]);
            if(j<m-1)printf(" ");
        }
        printf("\n");
    }
    for(k=1;k<p;k++){
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                run[i][j]=0;
                for(l=0;l<m;l++)
                    if(k==1)run[i][j]+=mat[i][l]*mat[l][j];
                    else run[i][j]+=prev[i][l]*mat[l][j];
            }
        }
        for(i=0;i<m;i++)
            for(j=0;j<m;j++)
                prev[i][j]=run[i][j];
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d",run[i][j]);
            if(j<m-1)printf(" ");
        }
        if(i<m-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
