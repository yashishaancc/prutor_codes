#include <stdio.h>

int main(){
    int num[4][6] = {
        {1,2,3,4,5,6},
        {10,20,30,40,50,60},
        {100,200,300,400,500,600},
        {1000,2000,3000,4000,5000,6000}
    };
    int i,j;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 4; j++){
            printf("%d", num[j][i]);
            if(j < 3) printf(" "); // No stray spaces at the end
        }
        if(i < 5) printf("\n"); // No stray new lines at the end
    }
    return 0;
}
