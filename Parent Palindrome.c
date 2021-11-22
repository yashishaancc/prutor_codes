#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    gets(str);
    int i,l=strlen(str),c,d,j,f,g,a,b,p,q,h;
    for(i=l/2-1;i>=0;i--){
        a=0,b=0;
        for(j=1;j<=i;j++){
            if(str[i+j]==str[i-j])a++;
            if(str[i+j-1]==str[i-j])b++;
        }
        if(a==i){
            p=i;
            g=3;
            break;
        }
        if(b==i){
            p=i;
            g=4;
            break;
        }
    }
    for(i=l/2;i<l;i++){
        c=0,d=0;
        for(j=1;j<l-i;j++){
            if(str[i+j-1]==str[i-j])d++;
            if(str[i+j]==str[i-j])c++;
        }
        if(l%2==0){
            if(str[i+j-1]==str[2*i-j])d++;
        }
        if(c==l-i-1){
            q=i;
            f=2;
            break;
        }
        if(d==l-i-1+((l%2==0)?1:0)){
            q=i;
            f=1;
            break;
        }
    }
    if(g==3){
        if(f==1){
          if((2*(l-p)-1)>(2*q))h=1;
          else if((2*(l-p)-1)==(2*q))h=(str[l-1]<str[0])?1:3;
          else h=3;
        }
        if(f==2){
            if((2*(l-p)-1)>(2*q+1))h=2;
            else if((2*(l-p)-1)==(2*q+1))h=(str[l-1]<str[0])?2:3;
            else h=3;
        }
    }
    if(g==4){
        if(f==1){
            if((2*(l-p))>(2*q))h=1;
            else if((2*(l-p))==(2*q))h=(str[l-1]<str[0])?1:4;
            else h=4;
        }
        if(f==2){
            if((2*(l-p))>(2*q+1))h=2;
            else if((2*(l-p))==(2*q+1))h=(str[l-1]<str[0])?2:4;
            else h=4;
        }
    }
    if(h==1){
        printf("%d\n",2*q);
        for(j=0;j<2*q;j++){
            if(j<=q)printf("%c",str[j]);
            else printf("%c",str[2*q-j-1]);
        }
    }
    if(h==2){
        printf("%d\n",2*q+1);
        for(j=0;j<2*i+1;j++){
            if(j<=q)printf("%c",str[j]);
            else printf("%c",str[2*q-j]);
        }
    }
    if(h==3){
        printf("%d\n",2*(l-p)-1);
        for(j=0;j<2*(l-p)-1;j++){
            if(p==0&&str[0]<str[l-1])printf("%c",(j<l)?str[j]:str[2*(l-1)-j]);
            else if(j<(l-p))printf("%c",str[l-j-1]);
            else printf("%c",str[l-(2*(l-p-1)-j)-1]);
        }
    }
    if(h==4){
        printf("%d\n",2*(l-p));
        for(j=0;j<2*(l-p);j++){
            if(j<l-p)printf("%c",str[l-j-1]);
            else printf("%c",str[l-(2*(l-p)-1-j)-1]);
        }
    }
    return 0;
}
