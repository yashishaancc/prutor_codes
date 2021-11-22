#include<stdio.h>
int main(){
    int num,i=0,c2=0,a1,ca1=0,s1=0,s2=0;
    scanf("%d",&num);
    a1=num;
    while(num!=-1){
        c2=(num==2)?c2+1:c2;
        ca1=(num==a1)?ca1+1:ca1;
        i++;
        if(i%2==1)s1+=num;
        if(i%2==0)s2+=num;
        scanf("%d",&num);
    }
    printf("%d\n%d\n%d\n%s",i,c2,ca1,((s1-s2)%11==0)?"YES":"NO");
    return 0;
}
