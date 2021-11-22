#include<stdio.h>

typedef struct emp{
    int r,d,m,y;
}e;

int main()
{
    int n,i,qr,f=0,c=0;
    scanf("%d",&n);
    e e[n];
    for(i=0;i<n;i++){
        scanf("%d%d/%d%d",&e[i].r,&e[i].d,&e[i].m,&e[i].y);
    }
    scanf("%d",&qr);
    for(i=0;i<n;i++){
        if(e[i].r==qr){
            f=i+1;
            break;
        }
    }
    if(f==0)printf("NOT FOUND");
    else{
        for(i=0;i<n;i++){
            if(i!=f-1&&e[i].m==e[f-1].m&&e[i].y==e[f-1].y){
                printf("%d\n",e[i].r);
                c++;
            }
        }
        if(c==0)printf("NO ONE");
    }
    
    //  Insert your code here.
    
    return 0;
}
