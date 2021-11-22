#include<stdio.h>
int main(){
    int n,x,e=0,d=0,l=0,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=-1;
    }
    char c;
    while((c=getchar())!='X'){
        if(c=='D'){
            if(l==0)printf("UNDERFLOW");
            else if(l==1){
                a[d]=-1;
                d=0;
                l--;
                for(i=0;i<n;i++){
                    if(i==0)printf("[");
                    if(a[i]==-1)printf("*");
                    else printf("%d",a[i]);
                    if(i!=n-1)printf(" ");
                    if(i==n-1)printf("]");
                }
            }
            else{
                a[d]=-1;
                d=(d+1)%n;
                l--;
                for(i=0;i<n;i++){
                    if(i==0)printf("[");
                    if(a[i]==-1)printf("*");
                    else printf("%d",a[i]);
                    if(i!=n-1)printf(" ");
                    if(i==n-1)printf("]");
                }
            }
        }
        else if(c=='E'){
            scanf("%d",&x);
            if(l<n){
                if(l>0)a[e]=x;
                else a[0]=x;
                e=(e+1)%n;
                l++;
                for(i=0;i<n;i++){
                    if(i==0)printf("[");
                    if(a[i]==-1)printf("*");
                    else printf("%d",a[i]);
                    if(i!=n-1)printf(" ");
                    if(i==n-1)printf("]");
                }
            }
            else printf("OVERFLOW");
        }
        printf("\n");
        getchar();
    }
    return 0;
}
