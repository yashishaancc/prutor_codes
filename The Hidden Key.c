#include<stdio.h>

int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int a[n],b[n],m[n],l=n;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        m[i]=b[i]-a[i];
    }
    for(i=0;i<n;i++){
        c=0;
        for(j=i+1;j<n;j++){
            if(m[j-i-1]==m[j])c++;
        }
        if(c==n-i-1){
            l=i+1;
            break;
        }
    }
    printf("%d\n",l);
    for(i=0;i<l;i++){
        printf("%d",m[i]);
        if(i!=l-1)printf(" ");
    }
    
    //  Insert your code here.
    
    return 0;
}
