#include <stdio.h>
#include <math.h>

int main(){
    int a,b,m,n;
    scanf("%d%d",&a,&b);
    printf("%d\n",m=a/1000+(a/100)%10+(a/10)%10+a%10);
    printf("%d\n",n=b/1000+(b/100)%10+(b/10)%10+b%10);
    if(m%2==0&&n%2==0){
        printf("Both\n");
        if(b/1000==0)
        printf("%d%d%d%d%d%d%d",a/1000,(b/100)%10,(a/100)%10,(b/10)%10,(a/10)%10,b%10,a%10);
        else
        printf("%d%d%d%d%d%d%d%d",b/1000,a/1000,(b/100)%10,(a/100)%10,(b/10)%10,(a/10)%10,b%10,a%10);
    }
    if((m%2==0&&n%2!=0)||(m%2!=0&&n%2==0)){
        printf("One\n");
        if(a/1000==0)
        printf("%d%d%d%d%d%d%d",b/1000,(a/100)%10,(b/100)%10,(a/10)%10,(b/10)%10,a%10,b%10);
        else
        printf("%d%d%d%d%d%d%d%d",a/1000,b/1000,(a/100)%10,(b/100)%10,(a/10)%10,(b/10)%10,a%10,b%10);
    }
    if(m%2!=0&&n%2!=0){
        printf("Neither\n");
        if(b/1000==0)
        printf("%d%d%d%d%d%d%d",a/1000,(b/100)%10,(a/100)%10,(b/10)%10,(a/10)%10,b%10,a%10);
        else
        printf("%d%d%d%d%d%d%d%d",b/1000,a/1000,(b/100)%10,(a/100)%10,(b/10)%10,(a/10)%10,b%10,a%10);
    }
    
    // Write your code here
    
    return 0;
}
