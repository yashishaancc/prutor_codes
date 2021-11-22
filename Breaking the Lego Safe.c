#include<stdio.h>

int main(){
    int a,b;
    scanf("#-#-# #-#-#\n#-%d-# #-%d-#\n#-#-# #-#-#",&a,&b);
    printf("O---O---O\nO--%.1f--O\nO---O---O",(float)(a+b)/2);
    
    //  Insert your code here.
    
    return 0;
}
