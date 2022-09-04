#include<stdio.h>
int main()
{
    int a,b,n,m;
    printf("Enter Your choice (1 for Even | 2 for Odd ) : ");
    scanf("%d",&n);
    printf("Enter Your Last Number to where you need answer: ");
    scanf("%d",&m);
    if(n==1){
        for(int i=0 ; i<=m ; i+=2){
            if(i%2 !=0 ){
                continue;
            }
            printf("%d\n",i);
        }
    }else if(n==2){
        for(int i=1;i<=m;i+=2){
            if(i%2==0){
                continue;
            }
            printf("%d\n",i);
        }
    }else{
        printf("Enter Valid Argument!!");
    }
    return 0;
}