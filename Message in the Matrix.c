#include<stdio.h>
#include<string.h>

int checkdiagup(char*str,char*mat,int i,int j,int m,int n,int l){
    if(((i<n-j-1)?i:n-j-1)<l-1)return 0;
    int p,q;
    for(p=i,q=j;p>i-l&&q<j+l;p--*q++){
        if(str[i-p]!=*(mat+n*p+q))return 0;
    }
    return 1;
}

int checkline(char*str,char*mat,int i,int j,int m,int n,int l){
    if(n-j<l)return 0;
    int p;
    for(p=j;p<j+l;p++){
        if(str[p-j]!=*(mat+n*i+p))return 0;
    }
    return 1;
}

int checkdiagdown(char*str,char*mat,int i,int j,int m,int n,int l){
    if(((m-i<n-j)?m-i:n-j)<l)return 0;
    int p,q,c=0;
    for(p=i,q=j;p<i+l&&q<j+l;++p*++q){
        if(str[p-i]!=*(mat+n*p+q))return 0;
    }
    return 1;
}

int main()
{
    int m,n,i,j,c=0;
    scanf("%d%d\n",&m,&n);
    char str[100],mat[m][n];
    gets(str);
    int l=strlen(str);
    for(i=0;i<m;i++){
        gets(mat[i]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(checkdiagup(str,&mat[0][0],i,j,m,n,l)){
                printf("FOUND AT (%d, %d) DIAG UP\n",i,j);
                c++;
            }
            if(checkline(str,&mat[0][0],i,j,m,n,l)){
                printf("FOUND AT (%d, %d) FLAT\n",i,j);
                c++;
            }
            if(checkdiagdown(str,&mat[0][0],i,j,m,n,l)){
                printf("FOUND AT (%d, %d) DIAG DOWN\n",i,j);
                c++;
            }
        }
    }
    if(c==0)printf("NOT FOUND");
    
    //  Insert your code here.
    
    return 0;
}
