#include<stdio.h>

struct pt{
    long a[10],d;
    char nm[100];
};

int main()
{
    int n,k,q,i,j,id=0;
    long max=0;
    scanf("%d%d%d",&n,&k,&q);
    struct pt p[n];
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            scanf("%ld ",&p[i].a[j]);
        }
        gets(p[i].nm);
    }
    for(i=0;i<n;i++){
        p[i].d=0;
        for(j=0;j<k;j++){
            p[i].d+=(p[q-1].a[j]-p[i].a[j])*(p[q-1].a[j]-p[i].a[j]);
        }
        if(p[i].d>max){
            max=p[i].d;
            id=i;
        }
    }
    puts(p[id].nm);
    printf("%ld",max);
    
    //  Insert your code here.
    
    return 0;
}
