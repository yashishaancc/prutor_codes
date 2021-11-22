#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s[n][n],i,j,sum,r[n],c[n],b[n],rc=0,cc=0,bc=0,k=sqrt(n),box,l,m;
    for(i=0;i<n;i++)//for scanning elements
        for(j=0;j<n;j++)
            scanf("%d",&s[i][j]);//scan completed
    for(i=0;i<n;i++){//checking valid rows
        sum=0;
        for(j=0;j<n;j++){
            sum+=s[i][j];
            if(s[i][j]<=0||s[i][j]>n){
                sum=0;
                break;
            }
            for(l=j+1;l<n;l++){
                if(s[i][l]==s[i][j]){
                    sum=0;
                    break;
                }
            }
        }
        if(sum!=n*(n+1)/2){
            r[rc]=i;
            rc++;//row check completed
        }
    }
    for(j=0;j<n;j++){//checking valid columns
        sum=0;
        for(i=0;i<n;i++){
            sum+=s[i][j];
            if(s[i][j]<=0||s[i][j]>n){
                sum=0;
                break;
            }
            for(l=i+1;l<n;l++){
                if(s[l][j]==s[i][j]){
                    sum=0;
                    break;
                }
            }
        }
        if(sum!=n*(n+1)/2){
            c[cc]=j;
            cc++;//column check completed
        }
    }
    for(box=0;box<n;box++){//checking valid boxes
        sum=0;
        for(i=k*(box/k);i<k*(box/k+1);i++){
            for(j=k*(box%k);j<k*(box%k+1);j++){
                sum+=s[i][j];
                if(s[i][j]<=0||s[i][j]>n){
                    sum=0;
                    break;
                }
                for(l=i+1;l<k*(box/k+1);l++){
                    for(m=j+1;m<k*(box%k+1);m++){
                        if(s[l][m]==s[i][j]){
                            sum=0;
                            break;
                        }
                    }
                }
            }
        }
        if(sum!=n*(n+1)/2){
            b[bc]=box;
            bc++;//box check completed
        }
    }
    if(rc==0&&cc==0&&bc==0)printf("Valid Sudoku");
    else{
        for(i=0;i<rc;i++)
            printf("Row %d is invalid\n",r[i]+1);
        for(i=0;i<cc;i++)
            printf("Column %d is invalid\n",c[i]+1);
        for(i=0;i<bc;i++)
            printf("Box %d is invalid\n",b[i]+1);
    }
    
    //  Insert your code here.
    
    return 0;
}
