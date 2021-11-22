#include<stdio.h>
int first(int*a,int s,int e,int q){
    if(s==e){
        if(a[s]==q)return s;
        else return -1;
    }
    int m=(s+e+1)/2;
    if(a[m]==q){
        int p=first(a,s,m-1,q);
        if(p==-1)return m;
        else return p;
    }
    if(a[m]<q)return first(a,m,e,q);
    else return first(a,s,m-1,q);
}
int last(int*a,int s,int e,int q){
    if(s==e){
        if(a[s]==q)return s;
        else return -1;
    }
    int m=(s+e+1)/2;
    if(a[m]==q){
        int p=last(a,m,e,q);
        if(p==-1)return m;
        else return p;
    }
    if(a[m]<q)return last(a,m,e,q);
    else return last(a,s,m-1,q);
}
int count(int*a,int n,int q){
    return last(a,0,n-1,q)-first(a,0,n-1,q)+1;
}
int main(){
    int n,i,cm;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    cm=count(a,n,a[n/2]);
    if(cm>n/2)printf("YES\n%d",cm);
    else printf("NO\n%d",count(a,n,a[0]));
    return 0;
}
