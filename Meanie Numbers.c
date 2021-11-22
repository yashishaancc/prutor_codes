#include<stdio.h>

int checkAM(int*arr,int n,int k){//func. to check if n is possible am
    int i,j,isam=0;//let assume n is not possible am
    for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if((arr[i]+arr[j])/2.0==n){//checking if n is am
                printf("YES\n");//if n is am print yes
                isam=1;//n is possible am
                return 1;//return 1 if n is possible am
            }
        }
    }
    printf("NO\n");//if escapes from loop then n can't be am
    return 0;//So,return 0 if n can't be possible am
}

int checkGM(int*arr,int n,int k){//func. to check if n is possible gm
    int i,j,isgm=0;//let assume n is not possible gm
    for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if(arr[i]*arr[j]==n*n){//checking if n is gm
                printf("YES\n");//if n is am print yes
                isgm=1;//n is possible gm
                return 1;//return 1 if n is possible gm
            }
        }
    }
    printf("NO\n");//if escapes from loop then n can't be gm
    return 0;//So,return 0 if n can't be possible gm
}

int main()
{
    int n,k,i,isam,isgm;//isam,isgm to store 1 or 0 according
    scanf("%d%d",&n,&k);//to if n is possible am,gm or not
    int arr[k];//array to store numbers
    for(i=0;i<k;i++){
        scanf("%d",&arr[i]);//scanning array elements
    }
    isam=checkAM(arr,n,k);//if n is possible am then isam=1
    isgm=checkGM(arr,n,k);//if n is possible gm then isgm=1
    if(isam==0||isgm==0)printf("NO");//if one of possibility fails
    else printf("YES");//if both possibilities of am,gm
    
    return 0;
}
