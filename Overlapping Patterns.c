#include<stdio.h>

int main()
{
    int num,n,i=0,a[20],count=0;
    scanf("%d",&num);
    while(num!=-1){
        a[i]=num;
        i++;
        scanf("%d",&num);
    }
    n=i;
    for(i=0;i<n;i++){
        if(a[i]==1&&i<n-2){
            if(a[i+1]==2&&a[i+2]==1){
                count++;
            }
        }
    }
    printf("%d",count);
    
    //  Insert your code here.
    
    return 0;
}
