#include <stdio.h>
#include <stdlib.h>

void rotateLeft(int ** mat, n){
    int i,j,sat[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sat[i][j]=mat[j][n-1-i];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mat[i][j]=sat[i][j];
}

void rotateRight(int ** mat, n){
    int i,j,sat[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sat[i][j]=mat[n-1-j][i];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mat[i][j]=sat[i][j];
}

void flipHorizontal(int ** mat, n){
    int i,j,sat[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sat[i][j]=mat[i][n-1-j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mat[i][j]=sat[i][j];
}

void flipVertical(int ** mat, n){
    int i,j,sat[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sat[i][j]=mat[n-1-i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mat[i][j]=sat[i][j];
}

void flipDiagonal(int ** mat, n){
    int i,j,sat[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sat[i][j]=mat[j][i];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mat[i][j]=sat[i][j];
}

void flipAntiDiagonal(int ** mat, n){
    int i,j,sat[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sat[i][j]=mat[n-1-j][n-1-i];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mat[i][j]=sat[i][j];
}

int main(){
    int n, **mat, i,j;
    scanf("%d",&n);
    mat = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        mat[i] = (int*)malloc(n * sizeof(int));
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    char c;
    scanf("\n%c",&c);
    while(c!='X'){
        if(c=='L')rotateLeft(mat,n);
        if(c=='R')rotateRight(mat,n);
        if(c=='H')flipHorizontal(mat,n);
        if(c=='V')flipVertical(mat,n);
        if(c=='D')flipDiagonal(mat,n);
        if(c=='A')flipAntiDiagonal(mat,n);
        scanf("%c",&c);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",mat[i][j]);
            if(j<n-1)printf(" ");
        }
        if(i<n-1)printf("\n");
    }
        
    // Now mat is read to function like a 2D array
    
    return 0;
}
