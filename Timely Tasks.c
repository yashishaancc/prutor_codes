#include<stdio.h>

int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    int a[n],i,t[n],s=0,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(c<n){
        for(i=0;i<n;i++){
            if(a[i]>0){
                if(a[i]>=b)s+=b;
                if(a[i]<b)s+=a[i];
                a[i]-=b;
                if(a[i]<=0){
                    t[i]=s;
                    c++;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",t[i]);
        if(i!=n-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
