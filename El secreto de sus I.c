#include<stdio.h>

int main()
{
    char s[1000];
    int n,i=0,c=0,t;
    s[i]=getchar();
    while(s[i]>='A'&&s[i]<='Z'){
        if(s[i]=='I'){
            c++;
            t=(c==1)?i:t;
        }
        i++;
        s[i]=getchar();
    }
    n=i;
    printf("%d\n",c);
    if(c==0){
        printf("%s",s);
    }
    else{
        for(i=t;i<n;i++){
            printf("%c",(s[i]+c<='Z')?s[i]+c:s[i]+c-26);
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
