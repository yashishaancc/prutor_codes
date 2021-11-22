#include<stdio.h>
struct node{
    int a;
    struct node*left;
    struct node*right;
};
int printsum(struct node node[],struct node*ptr){
    if(ptr->left!=NULL&&ptr->right!=NULL){
        int l=printsum(node,ptr->left);
        int r=printsum(node,ptr->right);
        return ptr->a+l+r;
    }
    else if(ptr->left!=NULL&&ptr->right==NULL){
        int l=printsum(node,ptr->left);
        return ptr->a+l;
    }
    else if(ptr->left==NULL&&ptr->right!=NULL){
        int r=printsum(node,ptr->right);
        return ptr->a+r;
    }
    else{
        return ptr->a;
    }
}
int main()
{
    int n,i,ri,qi;
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
    scanf("%d",&qi);
    printf("%d\n",node[qi].a);
    if(node[qi].left!=NULL)printf("%d\n",node[qi].left->a);
    else printf("%d\n",-1);
    if(node[qi].right!=NULL)printf("%d\n",node[qi].right->a);
    else printf("%d\n",-1);
    int sum=printsum(node,&node[qi]);
    printf("%d",sum);
    
    //  Insert your code here.
    
    return 0;
}
