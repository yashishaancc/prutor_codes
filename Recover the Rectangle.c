#include<stdio.h>
#include<stdlib.h>
struct point{
    int x,y;
};
int main(){
    int n,i,j,k,l,area=0;
    scanf("%d",&n);
    struct point p[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&p[i].x,&p[i].y);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(p[i].x==p[j].x){
                for(k=0;k<n;k++){
                    for(l=0;l<n;l++){
                        if((p[k].y==p[i].y)&&(p[l].y==p[j].y)&&(p[k].x==p[l].x)){
                            if(abs(((p[i].x)-(p[k].x))*((p[k].y)-(p[l].y)))>area)
                            area=abs(((p[i].x)-(p[k].x))*((p[k].y)-(p[l].y)));
                        }
                    }
                }
            }
        }
    }
    if(area==0)printf("-1");
    else printf("%d",area);
    
    //  Insert your code here.
    
    return 0;
}
