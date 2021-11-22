#include<stdio.h>
int main(){
    int s,d,a[20],b[20],i,j,sm,dm,f,g;
    i=0;
    scanf("%d",&s);
    while(s!=-1){
        a[i]=s;
        i++;
        scanf("%d",&s);
    }
    sm=i;
    i=0;
    scanf("%d",&d);
    while(d!=-1){
        b[i]=d;
        i++;
        scanf("%d",&d);
    }
    dm=i;
    for(i=0;i<dm;i++){
        f=0;
        for(j=0;j<dm;j++){
            if(b[i]<b[j]){
                f++;
            }
        }
        if(f==dm/2){
            g=b[i];
            break;
        }
    }
    for(i=0;i<sm;i++){
        f=0;
        for(j=i;j<sm;j++){
            if(a[i]>a[j]){
                f=a[j];
                a[j]=a[i];
                a[i]=f;            }
        }
    }
    for(i=0;i<sm;i++){
        if(a[i]>=g){
            g=a[i];
            i=-1;
            break;
        }
    }
    (i==-1)?printf("%d",g):printf("psst ... Dravid is better");
    return 0;
}
