#include<stdio.h>

int main()
{
    int max;
    scanf("%d\n",&max);
    int i=0,a[100],l=max,j;
    char c;
    c=getchar();
    while(c!='#'){
        if(c=='M'){
            scanf("%d",&a[i]);
            i++;
        }
        if(c=='F'){
            scanf("%d",&a[i]);
            a[i]=-a[i];
            i++;
        }
        if(c=='X'){
            if(i==0)printf("NO MORE INSTRUCTIONS\n");
            else if(a[0]>=0){
                if(l>=a[0]){
                    l-=a[0];
                    printf("%d BYTES LEFT\n",l);
                }
                else printf("NOT ENOUGH MEMORY\n");
                i--;
                for(j=0;j<i;j++){
                    a[j]=a[j+1];
                }
            }
            else{
                if(max-l>=-a[0]){
                    l-=a[0];
                    printf("%d BYTES LEFT\n",l);
                }
                else printf("SEGFAULT\n");
                i--;
                for(j=0;j<i;j++){
                    a[j]=a[j+1];
                }
            }
        }
        getchar();
        c=getchar();
    }
    
    //  Insert your code here.
    
    return 0;
}
