#include<stdio.h>
int valid(int value,int n,int newgrid[n][n],int i,int j){
    int z;
    for(z=0;z<n;z++){
        if(newgrid[i][z]==value)return 0;
        if(newgrid[z][j]==value)return 0;
    }
    return 1;
}
void solvesudoku(int n,int grid[n][n],int*no_of_sud,int left,int x,int y){
    int i,j,value;
    int newgrid[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            newgrid[i][j]=grid[i][j];
        }
    }
    if(left==0){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d",newgrid[i][j]);
            }
            // printf("\n");
        }
        printf("\n");
        (*no_of_sud)++;
    }
    for(i=x;i<n;i++){
        int f=0;
        for(j=y;j<n;j++){
            // printf("i=%d,j=%d\n",i,j);
            if(newgrid[i][j]==0){
                int values=0;
                for(value=1;value<=n;value++){
                    // printf("trying value=%d\n",value);
                    if(valid(value,n,newgrid,i,j)==1){
                        // printf("value %d is valid\n",value);
                        values++;
                        newgrid[i][j]=value;
                        solvesudoku(n,newgrid,no_of_sud,left-1,0,0);
                    }
                }
                if(values==0){
                    f=1;
                    break;
                }
            }
        }
        if(f==1)break;
    }
}
int main(){
	int n,i,j,filled=0;
    scanf("%d",&n);
    int grid[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            grid[i][j]=0;
        }
    }
    while(1){
        scanf("%d%d",&i,&j);
        if(i==-1)break;
        scanf("%d",&grid[i][j]);
        filled++;
    }
    i=0;
    int*no_of_sud=&i;
    solvesudoku(n,grid,no_of_sud,n*n-filled,0,0);
    printf("%d",*no_of_sud);
    return 0;
}
