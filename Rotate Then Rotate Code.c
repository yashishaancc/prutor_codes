#include<stdio.h>
#include<string.h>

void compare(char*str1,char*str2,int*k,int*l,int*isSame){
    //this func. checks if str1 can be converted to str2
    char temp1[100],temp2[100];//2temp.strings to manipulate imp. info.
    strcpy(temp1,str1);//copy str1 to temp1
    int i=0,l1=strlen(str1),c=0;//assume count=0 see third while loop
    while(temp1[i]!='\0'){//upto end of string
        temp1[i]=(str1[i]+*k>'z')?str1[i]+*k-26:str1[i]+*k;
        //rotate str1 by k letters and store in temp1
        i++;
    }
    i=0;
    while(temp1[i]!='\0'){//upto end of string
        temp2[i]=(i-*l>=0)?temp1[i-*l]:temp1[l1+i-*l];
        //rotate temp1 by l locations and store in temp2
        i++;
    }
    i=0;
    while(temp1[i]!='\0'){//upto end of string
        if(temp2[i]==str2[i])c++;//countig no. of equal characters
        i++;
    }
    if(c==l1)*isSame=1;//if count=length(str1),then we found the way
}

int main()
{
    char str1[100],str2[100];//two character arrays
    gets(str1);
    gets(str2);//get them
    int l1=strlen(str1),k,l;//k to tell by how much letters to rotate
    //l to tell by how much locations to rotate
    int isSame=0,found=0;//assume str1 can't become str2
    //assume we have not find way to convert str1 to str2
    for(k=0;k<26;k++){
        for(l=0;l<l1;l++){
            compare(str1,str2,&k,&l,&isSame);//check possi.to bec. same
            if(isSame==1){//if str1 can become str2
                printf("YES %d %d",k,l);
                found=1;//we found the way
                break;//So,break here
            }
        }
        if(found)break;//we found the way so break
    }
    if(isSame==0)printf("NO");//if we do not find any way
    
    return 0;
}
