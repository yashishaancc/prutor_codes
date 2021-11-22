#include<stdio.h>
#include<string.h>
int main(){
    int d=0;
    char c[100];
    for(int i=0; i<100; i++){
        c[i]='\0';
    }
    c[d]=getchar();
    while(c[d]!=EOF){
        int i,f=0,l=strlen(c);
        for(i=0;i<l-1;i++){
            if(c[d]==c[i]){
                f=1;
            }
        }
        if(f==0)printf("%c",c[d]);
        d++;
        c[d]=getchar();
    }
    return 0;
}
