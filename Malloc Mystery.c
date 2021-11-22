#include<stdio.h>
#include<string.h>
struct Block{
    char name;  // Name of the memory block
    int start;  // Starting index of the memory block.
    int end;    // Ending index of the memory block.
    int valid;  // If this block is valid.(Becomes invalid once it is freed.)
};
void fre(int*mem,struct Block*blocks,char ch,int i){
    int j,k,f=1;
    blocks[i].valid=0;
    for(j=0;j<i;j++){
        if(blocks[j].valid&&blocks[j].name==ch){
            f=0;
            blocks[j].valid=0;
            for(k=blocks[j].start;k<=blocks[j].end;k++){
                mem[k]=0;
            }
            printf("SUCCESS\n");
            break;
        }
    }
    if(f==1)printf("FAILURE\n");
}
void mallo(int*mem,struct Block*blocks,char ch,int m,int i){
    int j,k,l,f=1,c=0,g=0;
    for(j=0;j<i;j++){
        if(blocks[j].valid&&blocks[j].name==ch){
            c=0;
            for(k=0;k<1000;k++){
                if(mem[k]==0)c++;
                else c=0;
                if(c==m){
                    for(l=blocks[i].end=k;l>=(blocks[i].start=k-m+1);l--){
                        mem[l]=1;
                    }
                    f=0;
                    blocks[i].valid=1;
                    blocks[i].name=ch;
                    blocks[j].valid=0;
                    printf("MEMORY LEAK\nSUCCESS\n");
                    break;
                }
            }
            if(f==1){
                blocks[i].valid=0;
                printf("FAILURE\n");
            }
            g=1;
            break;
        }
    }
    if(g==0){
        for(k=0;k<1000;k++){
            if(mem[k]==0)c++;
            else c=0;
            if(c==m){
                for(l=blocks[i].end=k;l>=(blocks[i].start=k-m+1);l--){
                    mem[l]=1;
                }
                f=0;
                blocks[i].valid=1;
                blocks[i].name=ch;
                printf("SUCCESS\n");
                break;
            }
        }
        if(f==1){
            blocks[i].valid=0;
            printf("FAILURE\n");
        }
    }
}
int main(){
    int n,mem[1000],i,m=0,c=0;
    scanf("%d\n",&n);
    struct Block blocks[n];
    char str[10],ch;
    for(i=0;i<1000;i++){
        mem[i]=0;
    }
    for(i=0;i<n;i=i+1){
        scanf("%s %c",str,&ch);
        if(strcmp(str,"free")==0){
            if(i!=n-1)scanf("\n");
            fre(mem,blocks,ch,i);
        }
        else{
            scanf(" %d\n",&m);
            mallo(mem,blocks,ch,m,i);
        }
    }
    for(i=0;i<1000;i++){
        if(mem[i]==1)c++;
    }
    printf("%d",c);
    return 0;
}
