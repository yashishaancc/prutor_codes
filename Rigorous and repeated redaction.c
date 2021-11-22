#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[100],s[3000];
    scanf("%s",a);
    scanf("%s",b);
    int i,c=0,j,k=0,d;
    for(i=0;i<strlen(a);i++){
        if(a[i]==a[0])c++;
        if(((a[0]<='Z')?a[i]-a[0]:a[0]-a[i])=='a'-'A')c++;
    }
    for(i=0;i<strlen(a);i++){
        s[k]=a[i];
        if(a[i]==b[0]){
            d=0;
            for(j=i;j<i+strlen(b);j++){
                if(a[j]==b[j-i])d++;
            }
            if(d==strlen(b)){
                s[k]='X';s[k+1]='X';s[k+2]='X';
                i+=strlen(b)-1;
                k+=2;
            }
        }
        k++;
    }
    printf("%d\n%s",c,s);
    
    //  Insert your code here.
    
    return 0;
}
