#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void superGetline(char **strPtr, int *len){
    // In case you are trying for bonus, write your function body here
        getline(strPtr,len,stdin);
        int p,l=strlen(*strPtr);
        while(l-p>0){
            char*str=*strPtr+l;
            getline(&str,len,stdin);
            p=l;
            l=strlen(*strPtr);
        }
}

int main(){
    // Start with a single element array
    int numElements = 1000;
    char *str = (char*)malloc(numElements * sizeof(char));
    // In case you are trying for bonus, uncomment the statement below
    superGetline(&str, &numElements);
    
    // Else, write your code here itself
    
    printf("-----------BEGIN USER INPUT-----------\n");
    printf("%s\n", str);
    printf("-----------END USER INPUT-----------\n");
    printf("User string has %lu characters", strlen(str));
    return 0;
}
