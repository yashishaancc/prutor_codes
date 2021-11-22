#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d;
    scanf("(%d,%d) (%d,%d)",&a,&b,&c,&d);
    if(a>=0&&b>=0){
        printf("1");
    }
    if((a<0&&b>=0)||(a>=0&&b<0)){
        if(c>=0&&d>=0){
            printf("2");
        }
        else{
            printf("1");
        }
    }
    if(a<0&&b<0){
        if(c<0&&d<0){
            printf("1");
        }
        else if(c>=0&&d>=0){
            printf("4");
        }
        else{
            printf("2");
        }
    }
    return 0;
}
