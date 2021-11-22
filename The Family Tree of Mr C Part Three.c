#include<stdio.h>

int main()
{
    int n,q,i,j,c,h;
    scanf("%d",&n);
    int a[n],b[n],g[n];
    for(i=0;i<n-1;i++){
        scanf("%d%d",&a[i],&b[i]);
        g[i]=0;
    }
    g[n-1]=0;
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n-1;j++){
            if(i+1!=b[j])c++;
        }
        if(c==n-1){
            h=i+1;
            g[h-1]=1;
            break;
        }
    }
    for(i=0;i<n-1;i++){
        if(a[i]==h)g[b[i]-1]=2;
    }
    for(i=0;i<n-1;i++){
        if(g[a[i]-1]==2)g[b[i]-1]=3;
    }
    for(i=0;i<n-1;i++){
        if(g[a[i]-1]==3)g[b[i]-1]=4;
    }
    for(i=0;i<n-1;i++){
        if(g[a[i]-1]==4)g[b[i]-1]=5;
    }
    for(i=0;i<n-1;i++){
        if(g[a[i]-1]==5)g[b[i]-1]=6;
    }
    scanf("%d",&q);
    int d[q];
    for(i=0;i<q;i++){
        scanf("%d",&d[i]);
        printf("%d",g[d[i]-1]);
        if(i!=q-1)printf("\n");
    }
    
    
    //  Insert your code here.
    
    return 0;
}
