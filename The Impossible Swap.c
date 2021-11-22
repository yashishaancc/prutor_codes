#include<stdio.h>
int main(){
    int a = 3, b = 7, c;
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d", a, b);
}
