#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int m[n][n],s[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",m[n-1-j][i]);
            if(j<n-1)printf(" ");
        }
        printf("\n");
    }
    scanf("\n");
    char c;
    scanf("%c",&c);
    while(c!='X'){
        if(c=='L'){
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    s[i][j]=m[j][n-1-i];
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    m[i][j]=s[i][j];
        }
        if(c=='R'){
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    s[i][j]=m[n-1-j][i];
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    m[i][j]=s[i][j];
        }
        scanf("%c",&c);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",m[i][j]);
            if(j<n-1)printf(" ");
        }
        if(i<n-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
