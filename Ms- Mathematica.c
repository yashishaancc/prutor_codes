#include <stdio.h>
#include <math.h>

int main(){
    int a,b,m,s,p;
    scanf("%d +%di\n%d",&a,&b,&m);
    s=a%10+a/10%10+a/100%10+a/1000;
    p=(b%10)*(b/10%10)*(b/100%10)*(b/1000);
    printf("%d, %d\n",s,p);
    if(s%m==0&&p%m==0)
        printf("Favorite");
    else
        printf("Not favorite");
    
    // Write your code here
    
    return 0;
}
