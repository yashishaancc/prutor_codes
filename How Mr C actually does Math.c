#include<stdio.h>

int main()
{
    int a[100],i=0,j;
    char c;
    c=getchar();
    while(c!='#'){
        getchar();
        if(c>='0'&&c<='9'){
            a[i]=c-'0';
            i++;
            for(j=0;j<i;j++){
                printf("%d",a[j]);
                if(j!=i-1)printf(" ");
            }
            printf("\n");
        }
        else if(c=='+'){
            if(i<2)printf("ERROR\n");
            else{
                a[i-2]=a[i-2]+a[i-1];
                i--;
                for(j=0;j<i;j++){
                    printf("%d",a[j]);
                    if(j!=i-1)printf(" ");
                }
                printf("\n");
            }
        }
        else if(c=='*'){
            if(i<2)printf("ERROR\n");
            else{
                a[i-2]=a[i-2]*a[i-1];
                i--;
                for(j=0;j<i;j++){
                    printf("%d",a[j]);
                    if(j!=i-1)printf(" ");
                }
                printf("\n");
            }
        }
        c=getchar();
    }
    if(i==1)printf("%d",a[0]);
    else printf("ERROR");
    
    //  Insert your code here.
    
    return 0;
}
