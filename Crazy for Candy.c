#include<stdio.h>

void print(int *w,int *num,int done,int n,int rem,int*f){
    int i;
    if(rem<0)return;
    if(rem==0){
        for(i=0;i<done;i++){
            printf("%d",num[i]);
        }
        for(i=done;i<n;i++){
            printf("0");
        }
        printf("\n");
        *f=0;
        return;
    }
    for(i=9;i>=0;i--){
        //if(rem-w[done]*i<0)return;
        if(done==n)return;
        num[done]=i;
        print(w,num,done+1,n,rem-w[done]*i,f);
    }
}

int main()
{
    int n,i,k,*f=&i;
    scanf("%d",&n);
    int w[n],num[n];
    for(i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    scanf("%d",&k);
    *f=1;
    print(w,num,0,n,k,f);
    if(*f)printf("MR C IS DOOMED");
    //  Insert your code here.
    
    return 0;
}
