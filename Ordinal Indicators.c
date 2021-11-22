#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%10==1&&n!=11){
        printf("%dst",n);
    }
    else if(n%10==2&&n!=12){
        printf("%dnd",n);
    }
    else if(n%10==3&&n!=13){
        printf("%drd",n);
    }
    else{
        printf("%dth",n);
    }
    
    // Write your code here
    
    return 0;
}
