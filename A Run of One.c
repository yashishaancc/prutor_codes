#include<stdio.h>
int main(){
    int num,prev,c=0,c0=0,c1=0,a[100],i=0;
    scanf("%d",&num);
    while(num!=-1){
        (num==0)?c0++:0;
        prev=num;
        scanf("%d",&num);
        if(num==1){
            (c1==0)?c1++:0;
            if(prev==1)c1++;
            else c1=1;
        }
        else{
            if(num==-1&&c==0){
                c1=1;
            }
            a[i]=c1;
            i++;
        }
        c++;
    }
    for(num=0;num<i;num++){
        c1=(c1>a[num])?c1:a[num];
    }
    printf("%d\n%d\n%d",c,c0,c1);
    return 0;
}
