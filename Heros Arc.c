#include<stdio.h>

int main()
{
    int num,i=0,a[20],n,f=0,j;
    scanf("%d",&num);
    while(num!=-1){
        a[i]=num;
        scanf("%d",&num);
        i++;
    }
    n=i;
    for(i=1;i<n;i++){
        if(a[i]>a[i-1]){
            j=i-1;
            f=1;
            break;
        }
    }
    if(f==1){
        for(i++;i<n;i++){
            if(a[i]<a[i-1]){
                f=2;
                break;
            }
        }
    }
    if(f==2){
        printf("NO\n%d",a[n-1]);
    }
    else{
        printf("YES\n%d",a[j]);
    }
    //  Insert your code here.
    
    return 0;
}
