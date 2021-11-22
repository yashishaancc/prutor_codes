#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b!=0){
        printf("%.3f",(float)a/b);
    }
    else{
        printf("Divide-by-zero error!");
    }
    
    // Write your code here
    
    return 0;
}
