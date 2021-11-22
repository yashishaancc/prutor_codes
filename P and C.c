#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n%d\n%d\n",a,b,c);
    printf("%d%d\n%d%d\n%d%d\n",a,a,a,b,a,c);
    printf("%d%d\n%d%d\n%d%d\n",b,a,b,b,b,c);
    printf("%d%d\n%d%d\n%d%d",c,a,c,b,c,c);
    
    // Insert your code here
    
    return 0;
}
