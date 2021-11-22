#include<stdio.h>
#include<string.h>
int count=0;

void color(int n,char str[n][n],int c,int ro,int co){
    int a[n][n],i,j,k,f;
    if(ro==n){
        f=1;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(str[i][j]==str[(i+1)%n][j])f=0;
                if(str[i][j]==str[i][(j+1)%n])f=0;
                if(i==0){
                    if(str[i][j]==str[n-1][j])f=0;
                }
                else{
                    if(str[i][j]==str[i-1][j])f=0;
                }
                if(j==0){
                    if(str[i][j]==str[i][n-1])f=0;
                }
                else{
                    if(str[i][j]==str[i][j-1])f=0;
                }
            }
        }
        if(f==1){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    printf("%d",str[i][j]);
                }
            }
            count++;
            printf("\n");
        }
        return;
    }
    for(k=1;k<=c;k++){
        str[ro][co]=k;
        if(co!=n-1)color(n,str,c,ro,co+1);
        else color(n,str,c,ro+1,0);
    }
}

int main()
{
    int n,c;
    scanf("%d%d",&n,&c);
    char str[n][n];
    color(n,str,c,0,0);
    printf("%d",count);
    
    //  Insert your code here.
    
    return 0;
}
