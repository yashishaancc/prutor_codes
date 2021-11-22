#include<stdio.h>
#include<math.h>

struct point{
    int x,y;
};

struct pair{
    struct point p1,p2;
};

int checkid(struct pair pair1,struct pair pair2){
    float d=sqrt(pow(pair2.p2.x-pair2.p1.x,2)+pow(pair2.p2.y-pair2.p1.y,2));
    float d1=sqrt(pow(pair1.p2.x-pair2.p1.x,2)+pow(pair1.p2.y-pair2.p1.y,2));
    float d2=sqrt(pow(pair1.p2.x-pair2.p2.x,2)+pow(pair1.p2.y-pair2.p2.y,2));
    if(fabs(d1+d2-d)<0.0001||fabs(fabs(d1-d2)-d)<0.0001)return 1;
    return 0;
}

int main()
{
    int n,i,j,par=0,id=0;
    scanf("%d",&n);
    float s[n];
    struct pair p[n];
    for(i=0;i<n;i++){
        scanf("%d%d%d%d",&p[i].p1.x,&p[i].p1.y,&p[i].p2.x,&p[i].p2.y);
        if(p[i].p2.x-p[i].p1.x!=0)s[i]=(p[i].p2.y-p[i].p1.y)/(p[i].p2.x-p[i].p1.x);
        else s[i]=2147483647;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(fabs(s[j]-s[i])<0.0001){
                if(checkid(p[i],p[j]))id++;
                else par++;
            }
        }
    }
    printf("PARALLEL: %d\n",par);
    printf("INTERSECT: %d\n",n*(n-1)/2-(par+id));
    printf("IDENTICAL: %d",id);
    
    //  Insert your code here.
    
    return 0;
}
