#include<stdio.h>
int main(){
    long n,i;
    char*pt;
    long*ptr;
    ptr=&n;
    pt=ptr;
    scanf("%ld",&n);
    char a[9];
    for(i=0;i<8;i++){
        a[7-i]=*(pt+i);//n>>=8;//n%256;
        //n/=256;
    }
    a[8]='\0';
    puts(a);
    return 0;
}
