#include<stdio.h>

void push(int i,int p,int max,int*a){
    if(p+1==max)printf("FULL\n");
    else{
        a[p+1]=i;
    }
}

void pop(int p,int*a){
    if(p==-1)printf("EMPTY\n");
    else{
        printf("%d\n",a[p]);
    }
}

void check(int p,int max){
    if(p==-1)printf("EMPTY\n");
    else if(p+1==max)printf("FULL\n");
    else printf("NOT EMPTY\n");
}

int main()
{
    int max;
    scanf("%d\n",&max);
    int i,p=-1,a[max];
    char c;
    c=getchar();
    while(c!='X'){
        if(c=='E'){
            scanf("%d\n",&i);
            push(i,p,max,a);
            if(p<max-1)p++;
        }
        else{
            getchar();
            if(c=='D'){
                pop(p,a);
                if(p>-1)p--;
            }
            else if(c=='C')check(p,max);
        }
        c=getchar();
    }
    
    //  Insert your code here.
    
    return 0;
}
