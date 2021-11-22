#include<stdio.h>

int main()
{
    int n,k,i,j,a[100],l=1,c=1,m,b[100];
    scanf("%d%d",&n,&k);
    a[0]=n;
    for(i=0;i<k;i++){
        if(i==0)printf("%d",n);
        else{
            if(i==1){
                a[0]=1;
                a[1]=n;
                l=2;
                for(j=0;j<l;j++)printf("%d",a[j]);
            }
            else{
                m=0;
                for(j=1;j<l;j++){
                    if(a[j]==a[j-1])c++;
                    if(a[j]!=a[j-1]||j==l-1){
                        b[m+1]=a[j-1];
                        b[m]=c;
                        m=m+2;
                        c=1;
                        if(j==l-1&&a[j]!=a[j-1]){
                            b[m+1]=a[j];
                            b[m]=1;
                            m=m+2;
                        }
                    }
                }
                l=m;
                for(j=0;j<l;j++){
                    a[j]=b[j];
                    printf("%d",a[j]);
                }
            } 
        }
        if(i<k-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
