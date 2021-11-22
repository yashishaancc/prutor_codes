#include<stdio.h>

int main()
{
    int n,i,j,p=0,q=0,max=0,c=0,d=0,s=0,r=0,Max=0,R=0,S=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    scanf("%d%d",&i,&j);
    while(i!=-1&&j!=-1){
        a[i][j]++;
        scanf("%d%d",&i,&j);
    }
    for(i=0;i<n;i++){
        c=0;
        d=0;
        s=0;
        S=0;
        for(j=0;j<n;j++){
            if(a[i][j]==0)c++;
            if(a[j][i]==0)d++;
            s+=a[i][j];
            S+=a[j][i];
        }
        if(c==n)p++;
        if(d==n)q++;
        if(s>max){
            max=s;
            r=i;
        }
        if(S>Max){
            Max=S;
            R=i;
        }
    }
    printf("%d NODES SENT NO MESSAGES\n",p);
    printf("%d NODES RECEIVED NO MESSAGES\n",q);
    printf("MAX %d MESSAGES SENT BY NODE %d\n",max,r);
    printf("MAX %d MESSAGES RECEIVED BY NODE %d",Max,R);
    
    //  Insert your code here.
    
    return 0;
}
