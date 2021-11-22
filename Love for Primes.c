#include <stdio.h>
#include <math.h>

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
            break;
        }
    }
    if(n==i)
        printf("PRIME");
    else
        printf("COMPOSITE");
    
    //  Write your code here.
    
    return 0;
}
