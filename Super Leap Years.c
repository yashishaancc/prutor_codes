#include <stdio.h>
#include <math.h>

int main(){
    int y,a,b,c,n;
    scanf("%d%d%d%d%d",&y,&a,&b,&c,&n);
    ((y%a==0&&y%b==0&&y%c==0)||(y%a==0&&y%b!=0))?printf("Leap\n"):printf("Common\n");
    if(n==1){
        (y%a==0)?printf("Leap"):printf("Common");
    }
    if(n==2){
        (y%a==0&&y%b!=0)?printf("Leap"):printf("Common");
    }
    if(n==3){
        ((y%a==0&&y%b==0&&y%c==0)||(y%a==0&&y%b!=0))?printf("Leap"):printf("Common");
    }
    // Write your code here
    
    return 0;
}
