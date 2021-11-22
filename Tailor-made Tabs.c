#include <stdio.h>
#include<string.h>
void tailorTabs(char *str, int tab){
    // Print the string taking care of regular escape sequences and \T
}

int main(){
    int tab;
    char str[500];
    scanf("%d\n", &tab);
    gets(str);
    
    // Uncomment the following line if going for bonus
    // tailorTabs(str, tab);
    
    // Else write your code below
    
    //puts(str);
    int i,j,l=strlen(str),c=0,f=0;
    for(i=0;i<l;i++){
        if(str[i]=='\\')
        if(str[i+1]=='\"');
        else if(str[i+1]=='\\')i++;
        else if(str[i+1]=='n');
        else if(str[i+1]=='T');
        else{
            printf("ERROR");
            f=1;
            break;
        }
    }
    for(i=0;i<l&&f!=1;i++){
        if(str[i]=='\\'){
            if(str[i+1]=='\"'){
                printf("\"");
                i++;
                c++;
            }
            else if(str[i+1]=='\\'){
                printf("\\");
                i++;
                c++;
            }
            else if(str[i+1]=='n'){
                printf("\n");
                i++;
                c=0;
            }
            else if(str[i+1]=='T'){
                for(j=c;(j+1)%tab!=0;j++){
                    printf(" ");
                    c++;
                }
                //printf("%d",c);
                i++;
            }
            else{
                printf("ERROR");
                break;
            }
        }
        else{
            printf("%c",str[i]);
            c++;
        }
    }
    
    return 0;
}
