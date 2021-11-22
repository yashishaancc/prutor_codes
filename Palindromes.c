#include<stdio.h>
int main(){
    int n,i=0,j,p=1,a[20];
    scanf("%d",&n);
    while(n!=-1){
        a[i]=n;
        scanf("%d",&n);
        i++;
    }
    for(j=0;j<i;j++){
        if(a[j]!=a[i-j-1])p=0;
    }
    (p==1)?printf("YES"):printf("NO");
    return 0;
}
