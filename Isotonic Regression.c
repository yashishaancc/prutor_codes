#include <stdio.h>
#include <math.h>

int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5;
    scanf("(%d,%d) (%d,%d) (%d,%d) (%d,%d) (%d,%d)",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&x5,&y5);
    int fx1=y1;
    int fx2=(y2>=fx1)?y2:fx1;
    int fx3=(y3>=fx2)?y3:fx2;
    int fx4=(y4>=fx3)?y4:fx3;
    int fx5=(y5>=fx4)?y5:fx4;
    printf("f(%d) = %d\n",x2,fx2);
    printf("f(%d) = %d\n",x3,fx3);
    printf("f(%d) = %d\n",x4,fx4);
    printf("f(%d) = %d\n",x5,fx5);
    
    // Write your code here
    
    return 0;
}
