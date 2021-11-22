#include<stdio.h>

int main()
{
    long n,p,s=0;
    scanf("%ld",&n);
    p=n;
    while(p!=0){
        s+=p%10;
        p/=10;
    }
    long d=s;
    printf("%ld\n",s);
    while(1){
        if(s*s>n&&s*s%d==0){
            printf("%ld",s*s);
            break;
        }
        s++;
    }
    
    //  Insert your code here.
    
    return 0;
}
