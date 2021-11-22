#include<stdio.h>

int main(){
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    printf("%d\n",a/1000+(a/100)%10+(a/10)%10+a%10);
    if(a/1000==b)
        c++;
    if((a/100)%10==b)
        c++;
    if((a/10)%10==b)
        c++;
    if(a%10==b)
        c++;
    printf("%d",c);
    
    //  Insert your code here.
    
    return 0;
}
