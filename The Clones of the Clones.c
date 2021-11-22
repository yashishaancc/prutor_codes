#include <stdio.h>
#include <string.h>

// whereIsChar recursively calls itself to find out
// 1. the locations of all occurrences of c
// 2. total number of occurrences of c
// offset tells us how many chars of the string have we already searched

int whereIsChar(char* string, char* sub, int offset){
    char* ptr = strstr(string, sub); // Find next occurrence of c
    if(ptr != NULL){ // Did we find c ?
        int foundIndex = offset + (int)(ptr - string);
        printf("Found at index %d\n", foundIndex);
        // Continue searching for c in the remaining string
        return 1 + whereIsChar(ptr + 1, sub, foundIndex + 1);
    }else
        return 0; // Nothing more to do - no more occurences of c
}

int main(){
    char sub[100], str[100];
    scanf("%s\n", sub);
    gets(str);
    
    // offset is 0 since none of the string has been searched so far
    printf("Found %d occurrence(s) of substring ""\"""%s""\"", whereIsChar(str,sub,0), sub);
    
    return 0;
}
