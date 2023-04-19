#include<stdio.h>
#include<math.h>
int check_ArmstrongNumber(int num)
{
     if(num>0)
    return (pow(num%10,3) +check_ArmstrongNumber(num/10));
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
   if(check_ArmstrongNumber(num)==num)
    printf("It is an Armstrong Number");
   else
    printf("It is not an Armstrong Number");
}