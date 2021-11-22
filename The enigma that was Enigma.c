#include<stdio.h>

void decode(char*str,char*msg,int n,int done,int pos){//func. to decode
    if(done==n){//if we reach at end of string
        msg[pos]='\0';//terminating msg by null
        puts(msg);//print the msg.
        return;
    }
    if(str[done]!='0'){//if it is 0 then no valid alphabet can be found
        msg[pos]=str[done]-'0'+'a'-1;
        //put decoded alphabet in msg.
        decode(str,msg,n,done+1,pos+1);//decode next pos.
    }
    //Here,I conv. 1st 1dig.to alp. then 2 to ensure lexography
    if(str[done]<='2'&&done+1!=n&&str[done]>'0'){//for2digitTo al.conv.
        if(str[done+1]<='6'){//number must be <=26
            int num=10*(str[done]-'0')+str[done+1]-'0';
            //num stores two digit number represented by str
            msg[pos]=num+'a'-1;//put decoded alphabet in msg.
            decode(str,msg,n,done+2,pos+1);//decode next pos.
        }
    }
}

int main()
{
    int n;
    scanf("%d\n",&n);//scanning n
    char str[100],msg[100];//two arrays to store imp. strings
    gets(str);//get the string of n digits
    decode(str,msg,n,0,0);//decode the string
    
    return 0;
}
