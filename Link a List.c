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
void printrev(struct node*headptr,int n){
    static int i=0,j=0;
    j++;
    if(j!=n)printrev(headptr->ptr,n);
    i++;
    printf("%d",headptr->m);
    if(i!=n)printf(" ");
}
int main()
{
    int n,i,head;
    scanf("%d",&n);
    int arr[n],a[n],b[n],id[n];
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
    printf("\n");
    printrev(headptr,n);
    
    //  Insert your code here.
    
    return 0;
}
