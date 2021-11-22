#include<stdio.h>
struct node{
  int m;
  struct node*ptr;
};
void print(struct node*headptr,int n){
    int i;
    struct node*inptr=headptr;
    for(i=0;i<n;i++){
        printf("%d",inptr->m);
        if(i!=n-1)printf(" ");
        inptr=inptr->ptr;
    }
}
int main()
{
    int n,i,t,head;
    scanf("%d",&n);
    int arr[n],a[n],b[n],id[n],p=n;
    struct node an[100];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        id[i]=0;
    }
    scanf("%d",&head);
    for(i=0;i<n-1;i++){
        scanf("%d%d",&a[i],&b[i]);
        id[a[i]]=1;
    }
    struct node*headptr=&an[head];
    an[head].m=arr[head];
    for(i=0;i<n-1;i++){
        an[a[i]].ptr=&an[b[i]];
        an[b[i]].m=arr[b[i]];
    }
    struct node*tailptr;
    for(i=0;i<n;i++){
        if(id[i]==0){
            tailptr=&an[i];
            break;
        }
    }
    print(headptr,n);
    scanf("%d",&t);
    int x,y;
    for(i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        printf("\n");
        if(x==1){
            tailptr=tailptr->ptr=&an[p];
            an[p].m=y;
            p++;
            print(headptr,p);
        }
        else{
            printf("%d\n",headptr->m);
            headptr=headptr->ptr;
            p--;
            print(headptr,p);
        }
    }
    
    //  Insert your code here.
    
    return 0;
}
