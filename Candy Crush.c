#include<stdio.h>

int main()
{
    int a[10],i,j,k,sum,max,x,y;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        for(j=i;j<10;j++){
            sum=0;
            for(k=i;k<=j;k++){
                sum+=a[k];
            }
            max=(sum>max)?sum:max;
            if(max==sum){
                x=i+1;
                y=j+1;
            }
        }
    }
    printf("%d %d %d",max,x,y);
    
    //  Insert your code here.
    
    return 0;
}
