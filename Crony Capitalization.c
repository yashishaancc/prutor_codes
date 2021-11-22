#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        char str[1000];
        gets(str);
        int j,k,l=strlen(str),s=0,a[100];
        for(j=0;j<l;j++){
            if(j==0&&str[j]<='z'&&str[j]>='a')str[j]=str[j]-'a'+'A';
            else if(j!=0&&str[j]>='A'&&str[j]<='Z')str[j]+='a'-'A';
            else if((str[j]=='?'||str[j]=='.'||str[j]=='!')){
                a[s]=j;
                s++;
            }
        }
        for(j=0;j<l;j++){
            if(str[j]!=' '||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')){
                if(str[j]>='a'&&str[j]<='z')str[j]=str[j]-'a'+'A';
                break;
            }
        }
        for(j=0;j<s;j++){
            k=a[j];
            for(k++;k<l;k++){
                if(str[k]!=' '||(str[k]>='a'&&str[k]<='z')||(str[k]>='A'&&str[k]<='Z')){
                    if(str[k]>='a'&&str[k]<='z')str[k]=str[k]-'a'+'A';
                    break;
                }
            }
        }
        puts(str);
    }
    
    //  Insert your code here.
    
    return 0;
}
