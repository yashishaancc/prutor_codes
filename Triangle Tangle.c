#include<stdio.h>

struct point{
    int x,y;
};

struct line{
    struct point p1,p2;
};

struct triangle{
    struct point p1,p2,p3;
};

int check(struct triangle t,struct line l){
    int t1,t2,t3;
    t1=(t.p1.y-l.p1.y)*(t.p1.x-l.p2.x)-(t.p1.y-l.p2.y)*(t.p1.x-l.p1.x);
    t2=(t.p2.y-l.p1.y)*(t.p2.x-l.p2.x)-(t.p2.y-l.p2.y)*(t.p2.x-l.p1.x);
    t3=(t.p3.y-l.p1.y)*(t.p3.x-l.p2.x)-(t.p3.y-l.p2.y)*(t.p3.x-l.p1.x);
    if(t1*t2<0||t2*t3<0||t3*t1<0)return 1;
    if(t1==0&&t2==0||t2==0&&t3==0||t3==0&&t1==0)return 1;
    return 0;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    struct triangle t[n];
    struct line l;
    for(i=0;i<n;i++){
        scanf("%d%d",&t[i].p1.x,&t[i].p1.y);
        scanf("%d%d",&t[i].p2.x,&t[i].p2.y);
        scanf("%d%d",&t[i].p3.x,&t[i].p3.y);
    }
    scanf("%d%d",&l.p1.x,&l.p1.y);
    scanf("%d%d",&l.p2.x,&l.p2.y);
    //
    for(i=0;i<n;i++){
        if(check(t[i],l))printf("YES");
        else printf("NO");
        if(i!=n-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
