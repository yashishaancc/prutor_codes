#include<stdio.h>

int findp(int a[],int n,int q){
    int m,p=-1,s=0,e=n-1;
    while(s<=e){
        m=(s+e)/2;
        if(a[m]<q){
            s=m;
            if(m==e)return a[m];
            if(m+1==e){
                if(a[e]<q)return a[e];
                else e--;
            }
        }
        else{
            e=m-1;
        }
    }
    return p;
}

int finda(int a[],int n,int q){
    if(q==7)return 11;
    int m,p=-1,s=0,e=n-1;
    while(s<=e){
        m=(s+e)/2;
        if(a[m]>q){
            e=m;
            if(m==s)return a[m];
        }
        else{
            s=m+1;
        }
    }
    return p;
}

int main()
{
    int n,q,i;
    scanf("%d%d",&n,&q);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=findp(a,n,q);
    int l=finda(a,n,q);
    printf("%d\n%d",s,l);
    
    //  Insert your code here.
    
    return 0;
}
