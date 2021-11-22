#include<stdio.h>
#include<math.h>

struct point{
    int x,y;
};

struct line{
    struct point p1,p2;
};

float slope(struct line l){
    float slope=(l.p2.y-l.p1.y)/(float)(l.p2.x-l.p1.x);
    if(l.p2.x==l.p1.x)slope=42;
    return slope;
}

int chparr(struct line l1,struct line l2){
    if(slope(l1)==slope(l2))return 1;
    return 0;
}

int chang(struct line l1,struct line l2){
    if(slope(l1)*slope(l2)==-1)return 1;
    if(slope(l1)==0&&slope(l2)==42)return 1;
    return 0;
}

float len(struct line l){
    float len;
    len=pow((l.p2.x-l.p1.x),2)+pow((l.p2.y-l.p1.y),2);
    return len;
}

int main()
{
    int i,pr=0,a=0;
    struct point p[4];
    for(i=0;i<4;i++){
        scanf("%d%d",&p[i].x,&p[i].y);
    }
    struct line l[4];
    for(i=0;i<4;i++){
        l[i].p1.x=p[i].x;
        l[i].p1.y=p[i].y;
        l[i].p2.x=p[(i+1)%4].x;
        l[i].p2.y=p[(i+1)%4].y;
    }
    if(chparr(l[0],l[2]))pr++;
    if(chparr(l[1],l[3]))pr++;
    for(i=0;i<4;i++){
        if(chang(l[i],l[(i+1)%4]))a++;
    }
    printf("%d\n",pr);
    if(a)printf("YES\n");
    else printf("NO\n");
    if(pr==1)printf("TRAPEZIUM");
    else if(a==0)printf("PARALLELOGRAM");
    else{
        if(len(l[0])==len(l[1]))printf("SQUARE");
        else printf("RECTANGLE");
    }
    
    //  Insert your code here.
    
    return 0;
}
