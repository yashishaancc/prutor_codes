#include<stdio.h>

void gen(char *str,int n,int pos,int open,int close){
    if(pos==2*n){
        puts(str);
        return;
    }
    if(open==close){
        str[pos]='(';
        gen(str,n,pos+1,open+1,close);
    }
    if(open>close){
        if(open<n){
            str[pos]='(';
            gen(str,n,pos+1,open+1,close);
        }
        str[pos]=')';
        gen(str,n,pos+1,open,close+1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    char str[2*n+1];
    str[2*n]='\0';
    gen(str,n,0,0,0);
    
    //  Insert your code here.
    
    return 0;
}
