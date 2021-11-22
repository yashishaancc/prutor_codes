#include<stdio.h>

int main()
{
    int n,i,j,c=0,max=0,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==a[0])c++;
    }
    if(c==n)printf("DEFAULT");
    else{
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]+a[j]>max&&a[i]!=a[j]){
                    max=a[i]+a[j];
                    x=i+1;
                    y=j+1;
                }
            }
        }
        printf("%d %d\n%d %d",x,y,a[x-1],a[y-1]);
    }
    
    //  Insert your code here.
    
    return 0;
}
