#include <stdio.h>
#include <math.h>

int main(){
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n){
        printf("%d\nYES",s);
    }
    else{
        printf("%d\nNO",s);
    }
    //  Write your code here.
    
    return 0;
}
