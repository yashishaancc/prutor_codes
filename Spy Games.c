#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c,d,e;
    c=((a%10)+10-b)%10;
    d=(((a/10)%10)+10-b)%10;
    e=((a/100)+10-b)%10;
    printf("%d%d%d",e,d,c);
    
    // Write your code here
    
    return 0;
}
