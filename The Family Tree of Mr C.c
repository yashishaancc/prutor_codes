#include<stdio.h>

void fun(int ca,int ai){
    if(ca==0)printf("NO RELATIONS");
    else if(ca>1)printf("MULTIPLE RELATIONS");
    else if(ca==1){
        if(ai%2==0){
            if(ai==0)printf("MOTHER");
            if(ai>=2&&ai<=4)printf("GRAND MOTHER");
            if(ai>=6&&ai<=12)printf("GREAT GRAND MOTHER");
            if(ai>=14&&ai<=28)printf("GREAT GREAT GRAND MOTHER");
            if(ai>=30&&ai<=60)printf("GREAT GREAT GREAT GRAND MOTHER");
            if(ai>=62&&ai<=124)printf("GREAT GREAT GREAT GREAT GRAND MOTHER");
        }
        else{
            if(ai==1)printf("FATHER");
            if(ai>=3&&ai<=5)printf("GRAND FATHER");
            if(ai>=7&&ai<=13)printf("GREAT GRAND FATHER");
            if(ai>=15&&ai<=29)printf("GREAT GREAT GRAND FATHER");
            if(ai>=31&&ai<=61)printf("GREAT GREAT GREAT GRAND FATHER");
            if(ai>=63&&ai<=125)printf("GREAT GREAT GREAT GREAT GRAND FATHER");
        }
    }
}

int main()
{
    int n,i,a,b,c,d,ca=0,cb=0,cc=0,cd=0,ai,bi,ci,di;
    scanf("%d",&n);
    int names[n];
    for(i=0;i<n;i++){
        scanf("%d",&names[i]);
    }
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(i=0;i<n;i++){
        if(a==names[i]){ca++;ai=i;}
        if(b==names[i]){cb++;bi=i;}
        if(c==names[i]){cc++;ci=i;}
        if(d==names[i]){cd++;di=i;}
    }
    fun(ca,ai);
    printf("\n");
    fun(cb,bi);
    printf("\n");
    fun(cc,ci);
    printf("\n");
    fun(cd,di);
    
    //  Insert your code here.
    
    return 0;
}
