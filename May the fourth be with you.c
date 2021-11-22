#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 4:;
        case 7:;
        case 10:printf("The Phantom Menace");break;
        case 5:;
        case 11:printf("Attack of the Clones");break;
        case 6:;
        case 8:;
        case 9:;
        case 12:printf("Revenge of the Sith");break;
        case 13:printf("A New Hope");break;
        default:printf("Outside schedule!");
    }
    
    //  Write your code here.
    
    return 0;
}
