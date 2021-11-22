#include<stdio.h>
struct tree{
    int num,mg,rn;
};
int findtree(struct tree tree[],int n){
    int i,max=0;
    for(i=1;i<n;i++){
        if(tree[i].mg>tree[max].mg)max=i;
    }
    tree[max].mg=-1;
    return max;
}
int main(){
    int n,i,k,j,temp1,temp2;
    scanf("%d",&n);
    struct tree tree[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&tree[i].num,&tree[i].mg);
    }
    for(i=0;i<n;i++){
        tree[i].rn=0;
        for(j=i;j<n;j++){
            if(tree[j].num==i+1){
                temp1=tree[i].num;
                temp2=tree[i].mg;
                tree[i].num=tree[j].num;
                tree[i].mg=tree[j].mg;
                tree[j].num=temp1;
                tree[j].mg=temp2;
                break;
            }
        }
    }
    scanf("%d",&k);
    int r[k],max;
    for(i=0;i<k;i++){
        scanf("%d",&r[i]);
        max=findtree(tree,n);
        tree[max].rn=r[i];
    }
    for(i=0;i<n;i++){
        if(tree[i].rn==0)printf("TREE %d IS NOT OCCUPIED",i+1);
        else printf("STUDENT AT TREE %d IS %d",i+1,tree[i].rn);
        if(i!=n-1)printf("\n");
    }
    
    //  Insert your code here.
    
    return 0;
}
