#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%8==0){
        printf("8");
    }
    else{
        if(n%4==0){
            printf("4");
        }
        else{
            if(n%2==0){
                printf("2");
            }
            else{
                printf("1");
            }
        }
    }
    
    // Write your code here
    
    return 0;
}
