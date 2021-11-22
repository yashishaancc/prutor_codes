#include <stdio.h>
#include <math.h>

int main(){
    long n,i,s=0;
    scanf("%ld",&n);
    if(n>=pow(2,49)-1){
        printf("YES\n%.0lf",n-pow(2,49)+1);
    }
    else{
        printf("NO\n");
        for(i=0;s<=n;i++){
            s+=pow(2,i);
        }
        printf("%ld",i-1);
    }
    
    //  Write your code here.
    
    return 0;
}
