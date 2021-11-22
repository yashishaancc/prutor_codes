#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x<=100000){
        printf("Slab 1\n%.2f",0.00);
    }
    else if(x<=200000){
        printf("Slab 2\n%.2f",(x-100000)/10.0);
    }
    else if(x<=300000){
        printf("Slab 3\n%.2f",10000+(x-200000)/5.0);
    }
    else{
        printf("Slab 4\n%.2f",30000+(x-300000)*3/10.0);
    }
    
    // Write your code here
    
    return 0;
}
