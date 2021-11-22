#include<stdio.h>

int main()
{
    int m,n,p,x,y,i,j,k,l,c,q,h,no=0;
    scanf("%d%d%d",&m,&n,&p);
    int a[m][n],s[m][n],b[m][n],d[9],e[9],f[9];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=0;
            b[i][j]=1;
        }
    }
    for(i=0;i<p;i++){
        scanf("%d%d",&x,&y);
        scanf("%d",&a[x-1][y-1]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
                b[i][j]=0;
                c=0;
                for(k=i-1;k<=i+1&&k<m;k++){
                    for(l=j-1;l<=j+1&&l<n;l++){
                        if(k>=0&&l>=0&&a[k][l]!=0){
                            c++;
                            d[c]=a[k][l];
                            e[c]=k;
                            f[c]=l;
                        }
                    }
                }
                if(c==0){
                    s[i][j]=0;
                    no++;
                }
                if(c>=1){
                    s[i][j]=1;
                    if(c==1)b[e[c]][f[c]]++;
                    else{
                        h=d[1];
                        x=e[1];
                        y=f[1];
                        for(q=0;q<c;q++){
                            if(h>d[q+1]){
                                h=d[q+1];
                                x=e[q+1];
                                y=f[q+1];
                            }
                        }
                        b[x][y]++;
                    }
                }
            }
            else s[i][j]=1;
        }
    }
    h=0;
    x=0;
    y=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(h<=b[i][j]){
                if(h==b[i][j]&&a[x][y]>a[i][j]){
                    x=i;
                    y=j;
                }
                if(h!=b[i][j]){
                    x=i;
                    y=j;
                }
                h=b[i][j];
            }
        }
    }
    printf("NO PO: %d\nBUSIEST PO: ",no);
    printf("%d",a[x][y]);
    //  Insert your code here.
    
    return 0;
}
