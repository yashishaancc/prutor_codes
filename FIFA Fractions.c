#include<stdio.h>

int main(){
    int x,a,b,c,d,e,f;
    scanf("Team Number:%d\n%d - %d,%d - %d,%d - %d",&x,&a,&b,&c,&d,&e,&f);
    printf("Goal Ratio sum for Team %d: %.3f",x,(float)a/b+(float)c/d+(float)e/f);
    
    //  Insert your code here.
    
    return 0;
}
