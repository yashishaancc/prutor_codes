#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d%d%d\n",a,b,c);
    printf("%d%d%d\n",a,c,b);
    printf("%d%d%d\n",b,a,c);
    printf("%d%d%d\n",b,c,a);
    printf("%d%d%d\n",c,a,b);
    printf("%d%d%d\n",c,b,a);
    // Insert your code here
    
    return 0;
}
