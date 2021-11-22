#include<stdio.h>

int main()
{
    int m,n,p,q,i,j,k,l,c,d,e=0;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int a[m][n],b[p][q];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m-p+1;i++){
        for(j=0;j<n-q+1;j++){
            c=0;
            d=0;
            for(k=i;k<i+p;k++){
                for(l=j;l<j+q;l++){
                    if(a[k][l]==b[k-i][l-j])c++;
                    if(a[k][l]!=b[k-i][l-j])d++;
                }
            }
            if(c==p*q){printf("POSITIVE MATCH AT (%d, %d)\n",i,j);e++;}
            if(d==p*q){printf("NEGATIVE MATCH AT (%d, %d)\n",i,j);e++;}
        }
    }
    if(e==0)printf("NO MATCH");
    
    //  Insert your code here.
    
    return 0;
}
