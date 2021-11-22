#include<stdio.h>
int main(){
    int n,max=0,i,j,k,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        max=(a[i]>max)?a[i]:max;
    }
    for(i=1;i<=max;i++){
        for(j=0;j<n;j++){
            f=0;
            for(k=j;k<n;k++){
                if(a[k]>=max+1-i){
                    f++;
                }
            }
            if(a[j]>=max+1-i){
                (f==1)?printf("O"):printf("O ");
            }
            else if(f!=0){
                printf("  ");
            }
        }
        (i!=max)?printf("\n"):0;
    }
    return 0;
}
