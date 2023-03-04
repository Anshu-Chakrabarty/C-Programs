#include <stdio.h>
int main()
{
    int n1, n2;
    printf("enter the range of value to check the palindromic sequence \n");
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        int k = i;
        int reverse = 0;
        while (k > 0)
        {

            int f = k % 10;
            reverse = reverse * 10 + f;
            k /= 10;
        }

            if (reverse == i)
            {
                printf("the palindromic number is %d \n", i);
            }
        
    }
    return 0;
}