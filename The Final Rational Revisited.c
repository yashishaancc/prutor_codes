#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d.%d",&a,&b);
    printf("%d\n",b);
    printf("%d",b+(b/100000)+((b/10000)%10)*10+((b/1000)%10)*100+((b/100)%10)*1000+((b/10)%10)*10000+(b%10)*100000);
    
    
    //  Insert your code here.
    
    return 0;
}
