#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d\n",&n);
    int l[n],max=0,min=500,c,f=0;
    char str[n][500],st[500];
    for(i=0;i<n;i++){
        gets(str[i]);
        l[i]=strlen(str[i]);
        max=(max>l[i])?max:l[i];
        min=(min<l[i])?min:l[i];
    }
    for(i=0;i<min;i++){
        c=0;
        for(j=0;j<n;j++){
            if(str[j][i]==str[0][i])c++;
        }
        if(c==n){
            st[i]=str[0][i];
            f++;
        }
        else break;
    }
    st[i]='\0';
    if(f==0)printf("EMPTY");
    else printf("%s",st);
    
    //  Insert your code here.
    
    return 0;
}
