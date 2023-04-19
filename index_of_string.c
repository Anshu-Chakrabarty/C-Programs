#include <stdio.h>
# include <string.h>

int main(){
    char a[100];
    char b;
    int i;
    
    printf("Enter the sentence");
    gets(a);
    printf("Enter the search");
    scanf("%c",&b);
     int count= strlen(a);
for (i = 0; i < count; i++)
{
    if (a[i]=b)
    {        printf("%d",i);
    }
}
return 0;
}