#include <stdio.h>
#include <math.h>

int main(){
    int r1,m1,r2,m2,r3,m3;
    scanf("(%d,%d) (%d,%d) (%d,%d)",&r1,&m1,&r2,&m2,&r3,&m3);
    if(m1>m2&&m1>m3){
        printf("%d, ",r1);
        (m2>m3)?printf("%d",r2):printf("%d",r3);
    }
    else{
        (m2>m3)?(m1>m3)?printf("%d, %d",r2,r1):printf("%d, %d",r2,r3):(m1>m2)?printf("%d, %d",r3,r1):printf("%d, %d",r3,r2);
    }
    
    // Write your code here
    
    return 0;
}
