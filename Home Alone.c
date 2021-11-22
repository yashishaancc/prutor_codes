#include<stdio.h>
int main(){
    int a[5],b[6],c[11],i,j=0,k=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        for(;j<6;j++){
            if(a[i]>=b[j]){
                c[k]=b[j];
                k++;
            }
            else{
                c[k]=a[i];
                k++;
                break;
            }
        }
        if(j==6){
            break;
        }
    }
    for(;i<5;i++){
        c[k]=a[i];
        k++;
    }
    for(;j<6;j++){
        c[k]=b[j];
        k++;
    }
    for(k=0;k<11;k++){
        printf("%d",c[k]);
        (k!=10)?printf(" "):0;
    }
    return 0;
}
