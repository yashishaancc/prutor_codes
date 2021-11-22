#include<stdio.h>

void genpal(char*str,int n,int k,int i){
    int j;
    if(i==(k+1)/2){
        for(j=0;j<k;j++){
            printf("%c",str[j]);
        }
        printf("\n");
        return;
    }
    for(j=0;j<n;j++){
        str[i]='a'+j;
        str[k-i-1]='a'+j;
        genpal(str,n,k,i+1);
    }
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    char str[k+1];
    genpal(str,n,k,0);
    
    //  Insert your code here.
    
    return 0;
}
