#include<stdio.h>

int main()
{
    int n,i,j,p=0,m=0;
    scanf("%d\n",&n);
    char c,a[100];
    for(i=0;i<100;i++)
        a[i]='\0';
    for(i=0;i<n;i++){
        c=getchar();
        if(c=='<'){
            if(p>0)p--;
        }
        else if(c=='>'){
            if(p<m)p++;
        }
        else{
            for(j=m;j>p;j--){
                a[j]=a[j-1];
            }
            a[p]=c;
            printf("%s\n",a);
            p++;
            m++;
        }
        getchar();
    }
    
    //  Insert your code here.
    
    return 0;
}
