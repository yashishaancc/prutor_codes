#include<stdio.h>
#include<string.h>
int pal(char*str,int initial,int final){
    int i,c=0;
    for(i=0;i<=final-initial;i++){
        if(str[initial+i]==str[final-i])c++;
    }
    if(c==final-initial+1)return 1;
    return 0;
}
void printPalinDecomp(char*str,int*decomp,int len,int done,int counter){
    int i,j;
    if(done==len){
        for(i=0;i<len;i++){
            printf("%d",decomp[i]);
        }
        printf("\n");
        return;
    }
    for(i=len-1;i>=done;i--){
        if(pal(str,done,i)){
            for(j=done;j<=i;j++){
                decomp[j]=counter;
            }
            printPalinDecomp(str,decomp,len,i+1,counter+1);
        }
    }
}
int main()
{
    char str[10];
    gets(str);
    int len=strlen(str);
    int decomp[len];
    printPalinDecomp(str,decomp,len,0,1);
    
    //  Insert your code here.
    
    return 0;
}
