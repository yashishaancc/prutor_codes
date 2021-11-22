#include<stdio.h>

void check(int n,int m,int a[n][m]){
    int i,j,s=0,k,l,max=0,p,q,f=1,x,y;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==1){
                f=1;
                for(k=i,l=k-i+j;k<n,l<m;k++,l++){
                    for(p=i;p<=k;p++){
                        for(q=j;q<=l;q++){
                            if(p-i==q-j){
                                if(a[p][q]!=1)f=0;
                            }
                            else{
                                if(a[p][q]!=0)f=0;
                            }
                        }
                    }
                    if(f==0)break;
                    else{
                        s=k-i+1;
                        if(s>max){
                            max=s;
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
    }
    if(max==0)printf("0\n(-1,-1)");
    else{
        printf("%d\n(%d,%d)",max,x,y);
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    check(n,m,a);
    
    //  Insert your code here.
    
    return 0;
}
