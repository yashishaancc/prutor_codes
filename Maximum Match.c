#include<stdio.h>

int main()
{
    int n,k,i,j,max=0,x,y;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                if(i+j>max){
                    max=i+j;
                    x=i;
                    y=j;
                }
            }
        }
    }
    (max==0)?printf("No Match"):printf("%d %d\n%d %d",a[x],a[y],x+1,y+1);
    
    //  Insert your code here.
    
    return 0;
}
