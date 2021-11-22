#include<stdio.h>
#include<stdlib.h>
void genwinx(char*board,int*blanks,int b,int done,int x,int o){
    int i,j,newblanks[9];
    for(i=0;i<9;i++){
        newblanks[i]=blanks[i];
    }
    //printf("%d\n",b);
    if(b==0){
        int xc=0,oc=0;
        for(i=0;i<9;i++){
            if(board[i]=='X')xc++;
            if(board[i]=='O')oc++;
        }
        if(xc==5&&oc==4){
            int f;
            for(j=0;j<3;j++){
                f=0;
                for(i=0;i<3;i++){
                    if(board[3*j+i]=='X')f++;
                }
                if(f==3)break;
            }
            board[9]='\0';
            if(f==3)puts(board);
        }
        return;
    }
    for(i=0;i<b;i++){
        for(j=0;j<9;j++){
            if(newblanks[j]==0){
                board[j]='O';
                newblanks[j]=1;
                genwinx(board,newblanks,b-1,done+1,x,o);
                board[j]='X';
                newblanks[j]=1;
                genwinx(board,newblanks,b-1,done+1,x,o);
            }
        }
    }
}

int main()
{
    char board[10];
    gets(board);
    int i,b=0,x=0,o=0;
    int*blanks=(int*)malloc(9*sizeof(int));
    for(i=0;i<9;i++){
        if(board[i]=='X')x++;
        if(board[i]=='O')o++;
        if(board[i]=='B'){
            b++;
            blanks[i]=0;
        }
        else{
            blanks[i]=1;
        }
    }
    genwinx(board,blanks,b,0,x,o);
    
    //  Insert your code here.
    
    return 0;
}
