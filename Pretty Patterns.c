#include<stdio.h>
#include<string.h>
int checkrule(char*rule,char*pattern){
    int i,j=0;
    for(i=0;i<strlen(rule);i+=2){
        if(rule[i+1]=='+'){
                if(j>=strlen(pattern))return 0;
                if(pattern[j]!=rule[i])return 0;
                j++;
                if(j<strlen(pattern)&&pattern[j]==rule[i])j++;
        }
        else if(rule[i+1]=='*'){
            while(j<strlen(pattern)&&pattern[j]==rule[i])j++;
        }
        else{
            int t=j;
            for(;j<t+rule[i+1]-'0';j++){
                if(j>=strlen(pattern))return 0;
                if(pattern[j]!=rule[i])return 0;
            }
        }
    }
    return 1;
}

int main()
{
    char rule[100],pattern[100];
    gets(rule);
    gets(pattern);
    if(checkrule(rule,pattern))printf("YES");
    else printf("NO");
    
    //  Insert your code here.
    
    return 0;
}
