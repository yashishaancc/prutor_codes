#include<stdio.h>

int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int ages[n];
    for(i=0;i<n;i++){
        scanf("%d",&ages[i]);
    }
    for(i=0;i<n;i++){
        if(2*i+1>=n)break;
        if(ages[2*i+1]<=ages[i])c++;
        if(2*i+2>=n)break;
        if(ages[2*i+2]<=ages[i])c++;
    }
    if(c==0)printf("VALID");
    else printf("INVALID %d",c);
    
    //  Insert your code here.
    
    return 0;
}
