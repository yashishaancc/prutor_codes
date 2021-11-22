#include<stdio.h>

int c;

int binsearch(int a,int b[],int n,int q){
    if(n==1){
        if(a+b[0]==q)c++;
        return c;
    }
    if(n==0)return c;
    if(a+b[n/2]<q){
        binsearch(a,b+n/2+1,(n-1)/2,q);
    }
    else if(a+b[n/2]>q){
        binsearch(a,b,n/2,q);
    }
    else if(a+b[n/2]==q){
        c++;
        binsearch(a,b,n/2,q);
        binsearch(a,b+n/2+1,(n-1)/2,q);
    }
    return c;
}

int main()
{
    int m,n,q,i;
    scanf("%d%d%d",&m,&n,&q);
    int a[m],b[n];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++){
        c=0;
        printf("%d",binsearch(a[i],b,n,q));
        if(i!=m-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
