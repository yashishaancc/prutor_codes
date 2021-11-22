#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,e;
    scanf("(%f,%f)\n(%f,%f)\n%f",&a,&b,&c,&d,&e);
    if(sqrt((a-c)*(a-c)+(b-d)*(b-d))<=e){
        printf("Bulls-eye!");
    }
    else{
        printf("Fail!");
    }
    
    // Write your code here
    
    return 0;
}
