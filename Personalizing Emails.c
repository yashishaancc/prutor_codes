#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    char b[100];
    gets(a);
    gets(b);
    int i,count=0,l1=strlen(a);
    for(i=0;i<l1;i++){
        if(a[i]=='#'&&i<l1-5&&a[i+1]=='N'&&a[i+2]=='A'&&a[i+3]=='M'&&a[i+4]=='E'&&a[i+5]=='#'){
            count++;
            a[i]=b[0];
            printf("%s",b);
            i+=5;
        }
        else printf("%c",a[i]);
    }
    printf("\n%d",count);
    return 0;
}
