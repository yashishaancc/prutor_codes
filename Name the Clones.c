#include<stdio.h>

void generateNames(char* name, int k, int n, int left){
    int i;
    if(left==0){
        name[k]='\0';
        printf("%s\n",name);
        return;
    }
    for(i=0;i<n;i++){
        name[k-left]=i+'a';
        generateNames(name,k,n,left-1);
    }
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    char name[k+1];
    generateNames(name,k,n,k);
    
    //  Insert your code here.
    
    return 0;
}
