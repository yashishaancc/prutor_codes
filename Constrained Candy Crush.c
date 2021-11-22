#include<stdio.h>
void get(int*w,int*ch,int n,int k,int sum,int pos,int*ptr){
    if(sum==k){
        int i;
        for(i=0;i<n;i++){
            if(i<pos)printf("%d",ch[i]);
            else printf("0");
        }
        printf("\n");
        return;
    }
    if(pos==n)return;
    if(w[pos]+sum<=k){
        ch[pos]=1;
        if(sum+w[pos]==k)*ptr=1;
        get(w,ch,n,k,sum+w[pos],pos+1,ptr);
        ch[pos]=0;
        get(w,ch,n,k,sum,pos+1,ptr);
    }
    else{
        ch[pos]=0;
        get(w,ch,n,k,sum,pos+1,ptr);
    }
}
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int w[n],isfound=0,ch[n];
    for(i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    get(w,ch,n,k,0,0,&isfound);
    if(isfound==0)printf("MR C IS DOOMED");
    
    //  Insert your code here.
    
    return 0;
}
