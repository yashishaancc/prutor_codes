#include <stdio.h>
#include <math.h>

int main(){
    int a,b,r,c,d;
    scanf("(%d, %d), r =%d\n(%d, %d)",&a,&b,&r,&c,&d);
    d=sqrt(pow((double)a-c,2)+pow(b-d,2));
    (d<=r)?(d<r)?printf("In"):printf("On"):printf("Out");
    
    // Write your code here
    
    return 0;
}
