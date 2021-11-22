#include <stdio.h>
int main(){
    int dd,mm,yyyy;
    scanf("[%d][%d][%d]",&dd,&mm,&yyyy);
    printf("%d/%d/%d",dd,mm,yyyy%100);
    
    // Insert your code here
    
    return 0;
}       
