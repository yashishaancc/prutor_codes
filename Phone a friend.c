#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int a1=a/10000000;
    int a2=a/1000000%10;
    int a3=a/100000%10;
    int a4=a/10000%10;
    int a5=a/1000%10;
    int a6=a/100%10;
    int a7=a/10%10;
    int a8=a%10;
    int b1=b/10000000;
    int b2=b/1000000%10;
    int b3=b/100000%10;
    int b4=b/10000%10;
    int b5=b/1000%10;
    int b6=b/100%10;
    int b7=b/10%10;
    int b8=b%10;
    int ca=0;
    ca=(a1%2==0)?ca+1:ca;
    ca=(a2%2==0)?ca+1:ca;
    ca=(a3%2==0)?ca+1:ca;
    ca=(a4%2==0)?ca+1:ca;
    ca=(a5%2==0)?ca+1:ca;
    ca=(a6%2==0)?ca+1:ca;
    ca=(a7%2==0)?ca+1:ca;
    ca=(a8%2==0)?ca+1:ca;
    int cb=0;
    cb=(b1%2==0)?cb+1:cb;
    cb=(b2%2==0)?cb+1:cb;
    cb=(b3%2==0)?cb+1:cb;
    cb=(b4%2==0)?cb+1:cb;
    cb=(b5%2==0)?cb+1:cb;
    cb=(b6%2==0)?cb+1:cb;
    cb=(b7%2==0)?cb+1:cb;
    cb=(b8%2==0)?cb+1:cb;
    printf("%d %d\n",ca,cb);
    if(ca==cb)printf("Friends");
    else if((ca+cb)%2==0)printf("Acquaintances");
    else printf("Enemies");
    
    //  Write your code here.
    
    return 0;
}
