#include<stdio.h>

void gen(int*top,int n,int t,int p,int max){
    int i,j;
    if(p==n){
        int topic[n];
        for(i=0;i<p;i++){
            topic[i]=0;
            for(j=0;j<=i;j++){
                topic[i]+=top[j];
            }
            printf("%d",topic[i]);
        }
        printf("\n");
        return;
    }
    for(i=0;i<=max;i++){
        int sum=0;
        for(j=0;j<p;j++){
            sum+=top[j];
        }
        if(sum+i<=t){
            top[p]=i;
            gen(top,n,t,p+1,i);
        }
    }
}

int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    int top[n];
    gen(top,n,t,0,t);
    
    //  Insert your code here.
    
    return 0;
}
