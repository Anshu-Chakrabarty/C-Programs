#include <stdio.h>
int main(){
    int n,i,j,k,a;
    int t1=0,t2=1,sum;
    printf("Enter the range of fabinocis sequence \n");
    scanf("%d",&n);
    printf("The folllowing range of fibanocci series is :: \n");
    printf("0  \n");
    printf("1 \n");
    sum=t1+t2;
    printf("%d \n",sum);
    for(i=3;i<n ; i++){
       // printf("  %d",a);
        t1=t2;
        t2=sum;
        sum=t1+t2;
         printf("%d \n",sum);
    }
return 0;

}