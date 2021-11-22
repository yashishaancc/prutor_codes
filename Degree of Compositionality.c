#include<stdio.h>
int main(){
    int n,i,j,f,c=0;
    scanf("%d",&n);
    int p=n;
    for(i=2;i<=n;i++){
        if(n%i==0){
           f=0;
           for(j=2;j<=i;j++){
               if(i%j==0){
                   f++;
               }
           } 
           if(f==1){
               while(p%i==0){
                   c++;
                   p/=i;
               }
           }
        }
    }
    printf("%d",c);
    return 0;
}
