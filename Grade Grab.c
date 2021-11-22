#include <stdio.h>
#include <math.h>

int main(){
    int m,a,w,q;
    scanf("%d%d%d",&m,&a,&w);
    q=(m<50)?(m+w*a/100>100)?100:m+w*a/100:m;
    (m>=50)?printf("%d\n",q=m):printf("%d\n",(m+w*a/100>100)?100:m+w*a/100);
    if(q<50)printf("D");
    else if(q<70)printf("C");
    else if(q<90)printf("B");
    else printf("A");
    printf("\n");
    if(m<50)printf("D");
    else if(m<70)printf("C");
    else if(m<90)printf("B");
    else printf("A");
    
    // Write your code here
    
    return 0;
}
