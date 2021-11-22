#include <stdio.h>

int main(){
    int a,b,c,d,e;
    scanf("x = 1, f(x) = %d\n",&a);
    scanf("x = 2, f(x) = %d\n",&b);
    scanf("x = 3, f(x) = %d\n",&c);
    scanf("x = 4, f(x) = %d\n",&d);
    scanf("x = 5, f(x) = %d\n",&e);
    if(a<=b&&b<=c&&c<=d&&d<=e){
        printf("Yes");
    }
    else{
        printf("No\n");
        int f=0;
        if(a>b)
        f++;
        if(b>c)
        f++;
        if(c>d)
        f++;
        if(d>e)
        f++;
        printf("%d",f);
    }
    
    // Write your code here
    
    return 0;
}
