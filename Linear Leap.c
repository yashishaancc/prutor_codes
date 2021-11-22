#include<stdio.h>

int main()
{
    int num,n=0,a[100],i,j,k,l,f=0;
    scanf("%d",&num);
    while(num!=-1){
        a[n]=num;
        scanf("%d",&num);
        n++;
    }
    for(i=1;i<=a[0]&&i<n;i++){
        if(i==n-1){f=1;break;}
        for(j=1;j<=a[i]&&i+j<n;j++){
            if(i+j==n-1){f=1;break;}
            for(k=1;k<=a[i+j]&&i+j+k<n;k++){
                if(i+j+k==n-1){f=1;break;}
                for(l=1;l<=a[i+j+k]&&i+j+k+l<n;l++){
                    if(i+j+k+l==n-1){f=1;break;}
                }
            }
        }
    }
    (f==1)?printf("YES"):printf("NO");
    
    //  Insert your code here.
    
    return 0;
}
