#include <stdio.h>
int main(){
   int a, b;
   scanf("%d %d", &a, &b);
   printf("%d\n%d\n%d\n",a/100,(a/10)%10,a%10);
   printf("%d",b+(100*(a%10)+10*((a/10)%10)+a/100));
   
   // Insert your code here
   
   return 0;
}
