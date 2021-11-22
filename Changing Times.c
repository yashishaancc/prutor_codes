#include<stdio.h>

int main()
{
    int num,i=0,n,a[20],c=2,j=0,b[20],max=0;
    scanf("%d",&num);
    while(num!=-1){
        a[i]=num;
        i++;
        scanf("%d",&num);
    }
    n=i;
    for(i=2;i<n;i++){
        if(a[i]-a[i-1]==a[i-1]-a[i-2]){
            c++;
        }
        else{
            b[j]=c;
            j++;
            c=2;
        }
    }
    for(i=0;i<j;i++){
        max=(max>b[i])?max:b[i];
    }
    (n==1)?printf("1"):printf("%d",(max>c)?max:c);
    
    //  Insert your code here.
    
    return 0;
}
