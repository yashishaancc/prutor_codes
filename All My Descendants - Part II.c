#include<stdio.h>
struct node{
    int a;
    struct node*left;
    struct node*right;
};
void print(struct node node[],struct node*ptr){
    if(ptr->left!=NULL)print(node,ptr->left);
    printf("%d\n",ptr->a);
    if(ptr->right!=NULL)print(node,ptr->right);
}
int main()
{
    int n,i,ri;
    scanf("%d",&n);
    struct node node[n];
    for(i=0;i<n;i++){
        scanf("%d",&node[i].a);
    }
    scanf("%d",&ri);
    int a,b,c;
    for(i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(b!=-1)node[a].left=&node[b];
        else node[a].left=NULL;
        if(c!=-1)node[a].right=&node[c];
        else node[a].right=NULL;
    }
    print(node,&node[ri]);
    
    //  Insert your code here.
    
    return 0;
}
