#include <stdio.h>
int main(){
    int x1,y1,r1,x2,y2,r2;
    scanf("(%d,%d,%d) (%d,%d,%d)",&x1,&y1,&r1,&x2,&y2,&r2);
    if((r1+r2)*(r1+r2)==(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)){
        printf("Tangent External");
    }
    else if((r1+r2)*(r1+r2)<(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)){
        printf("Disjoint");
    }
    else if((r1-r2)*(r1-r2)==(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)){
        printf("Tangent Internal");
    }
    else if((r1-r2)*(r1-r2)>(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)){
        printf("Enclose");
    }
    else{
        printf("Intersect");
    }
    
    // Write your code here
    
    return 0;
}
