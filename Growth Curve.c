#include<stdio.h>

void genfun(int*fun,int n,int max,int i,int y){
    int j;
    if(i==n){
        for(j=0;j<n;j++){
            printf("%d",fun[j]);
            if(j!=n-1)printf(" ");
        }
        printf("\n");
        return;
    }
    for(j=y;j<=max;j++){
        fun[i]=j;
        genfun(fun,n,max,i+1,j);
    }
}

int main()
{
    int n,max;
    scanf("%d%d",&n,&max);
    int fun[n];
    genfun(fun,n,max,0,0);
    
    //  Insert your code here.
    
    return 0;
}
