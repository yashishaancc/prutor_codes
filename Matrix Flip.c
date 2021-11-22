#include<stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("\n");
    char c;
    scanf("%c",&c);
    while(c!='X'){
        if(c=='H'){
            printf("HORIZONTAL\n");
            int sat[n][m];
            for(i=0;i<n;i++)
                for(j=0;j<m;j++)
                    sat[i][j]=a[i][m-1-j];
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    a[i][j]=sat[i][j];
                    printf("%d",a[i][j]);
                    if(j<m-1)printf(" ");
                }
                if(i<n)printf("\n");
            }
        }
        else if(c=='V'){
            printf("VERTICAL\n");
            int sat[n][m];
            for(i=0;i<n;i++)
                for(j=0;j<m;j++)
                    sat[i][j]=a[n-1-i][j];
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    a[i][j]=sat[i][j];
                    printf("%d",a[i][j]);
                    if(j<m-1)printf(" ");
                }
                if(i<n)printf("\n");
            }
        }
        else{
            printf("ILLEGAL\n");
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    printf("%d",a[i][j]);
                    if(j<m-1)printf(" ");
                }
                if(i<n)printf("\n");
            }
        }
        scanf("%c",&c);
    }
    
    //  Insert your code here.
    
    return 0;
}
