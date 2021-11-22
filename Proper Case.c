#include<stdio.h>
int main(){
    char s[1000];
    int i=0;
    s[i]=getchar();
    while(s[i]!=EOF){
        if(i==0&&s[i]>='a'&&s[i]<='z')s[i]+='A'-'a';
        else if(s[i-1]<'A'||(s[i-1]>'Z'&&s[i-1]<'a')||s[i-1]>'z'){
            if(s[i]>='a'&&s[i]<='z')s[i]+='A'-'a';
        }
        else if(s[i]>='A'&&s[i]<='Z')s[i]+='a'-'A';
        i++;
        s[i]=getchar();
    }
    puts(s);
    return 0;
}
