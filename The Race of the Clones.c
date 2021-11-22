#include<stdio.h>

int lcm(int x,int y){
    int i;
    for(i=x;i<=x*y;i++){
        if(i%x==0&&i%y==0)return i;
    }
    return 0;
}

int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d\n",lcm(a[0],a[1]));
    i=0;
    while(i!=n-1){
        if(i==0)x=a[i];
        y=a[i+1];
        x=lcm(x,y);
        i++;
    }
    printf("%d",x);
    
    //  Insert your code here.
    
    return 0;
}
