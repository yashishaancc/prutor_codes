#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[1000];
    gets(a);
    gets(b);
    int i,k,l,m,count,max=0;
    for(i=0;i<strlen(b);i++){
        for(k=0;k<strlen(a);k++){
            if(a[k]==b[i]){
                count=0;
                for(l=k,m=i;l<strlen(a)&&m<strlen(b);l++,m++){
                    if(a[l]==b[m])count++;
                    else break;
                }
                max=(max>count)?max:count;
            }
        }
    }
    printf("%d",max);
    return 0;
}
