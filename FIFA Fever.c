#include<stdio.h>
int main(){
    int n,a,b,c,d,e,f;
    scanf("%d%d - %d,%d - %d,%d - %d",&n,&a,&b,&c,&d,&e,&f);
    printf("Goal Difference for Team %d: %d",n,a+c+e-b-d-f);

    
    // Write your code here
    
    return 0;
}
