#include<stdio.h>
int find1(int a[],int n,int min,int max){
    int m=(min+max+1)/2;
    if(m==min)return 0;
    if(a[m]<a[m-1]){
        return m;
    }
    else{
        if(a[m]<a[0])return find1(a,n,min,m-1);
        else if(a[m]>a[0])return find1(a,n,m,max);
        else{
            if(find1(a,n,m,max)==0)return find1(a,n,min,m-1);
            else return find1(a,n,m,max);
        }
    }
}
int find2(int*a,int n,int s,int e,int q){
    int m=(s+e+1)/2;
    if(a[m%n]==q)return m%n;
    if(m==s)return -1;
    if(a[m%n]>q)return find2(a,n,s,m-1,q);
    else return find2(a,n,m,e,q);
}
int main()
{
    int n,q,i,l;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    printf("%d\n",l=find1(a,n,0,n-1));
    printf("%d",find2(a,n,l,l+n-1,q));
    //printf("%d\n%d",l,id);
    
    //  Insert your code here.
    
    return 0;
}
