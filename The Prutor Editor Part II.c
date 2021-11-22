#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],d[2];
    gets(c);
    int l=strlen(c),p=l,i;
    gets(d);
    while(d[0]!='#'){
        if(d[0]=='<'){
            if(p>0)p--;
        }
        else if(d[0]=='>'){
            if(p<l)p++;
        }
        else if(d[0]==')'){
            if(p<l){
                for(i=p;i<l-1;i++){
                    c[i]=c[i+1];
                }
                c[l-1]='\0';
                l--;
                puts(c);
            }
            else{
                puts(c);
            }
        }
        else if(d[0]=='('){
            if(p>0){
                for(i=p-1;i<l-1;i++){
                    c[i]=c[i+1];
                }
                c[l-1]='\0';
                l--;
                p--;
                puts(c);
            }
            else{
                puts(c);
            }
        }
        gets(d);
    }
    
    //  Insert your code here.
    
    return 0;
}
