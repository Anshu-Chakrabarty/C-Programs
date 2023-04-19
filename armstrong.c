#include <stdio.h>

int main()
{
    int num, originalnum, result, remainder;
    printf("Enter a three digit number");
    scanf("%d",&num);
    originalnum=num;
     while(originalnum!=0){
         remainder=originalnum%10;
         result+= remainder*remainder*remainder;
         
         originalnum= originalnum/10;
     }
     if(result==num){
         printf("It is armstrong number");
        
     }else{
         printf("its not an armstrong number");
     }
}