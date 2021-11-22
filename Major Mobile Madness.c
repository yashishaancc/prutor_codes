#include<stdio.h>

typedef struct phone{
    int id,p,is;
    float a,b,c,d,e,av;
}p;

int main()
{
    int n,b,i,id=-1;
    float max=0;
    scanf("%d%d",&n,&b);
    p p[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&p[i].id,&p[i].p);
        scanf("%f%f%f%f%f",&p[i].a,&p[i].b,&p[i].c,&p[i].d,&p[i].e);
        p[i].is=(p[i].p<=b)?1:0;
        p[i].av=(p[i].a+p[i].b+p[i].c+p[i].d+p[i].e)/5;
    }
    for(i=0;i<n;i++){
        if(p[i].is){
            if(max<=p[i].av){
                if(max==p[i].av){
                    if(p[i].p<p[id].p)id=i;
                }
                else{
                    id=i;
                }
                max=p[i].av;
            }
        }
    }
    if(id==-1)printf("-1");
    else printf("%d",p[id].id);
    
    //  Insert your code here.
    
    return 0;
}
