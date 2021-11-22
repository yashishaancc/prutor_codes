#include<stdio.h>

int main()
{
    int n,i,c,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c=1;
        d=(i+a[i]+1)%n;
        while(c!=n&&d!=i){
            d=(d+a[d]+1)%n;
            c++;
        }
        if(d==i)printf("%d",c);
        else printf("-1");
        if(i!=n-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
