#include<stdio.h>

int main(){
    int ID_1,ID_2,a,b,c,d,w,x,y,z;
    scanf("%d %d - %d,%d - %d\n%d %d - %d,%d - %d",&ID_1,&a,&b,&c,&d,&ID_2,&w,&x,&y,&z);
    printf("ID\tGF\tGA\tGD\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d",ID_1,a+c,b+d,a+c-b-d,ID_2,w+y,x+z,w+y-x-z);
    
    //  Insert your code here.
    
    return 0;
}
