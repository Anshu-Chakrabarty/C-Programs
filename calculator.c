#include <stdio.h>

int main(){
  int x, y, n, choice;
  printf(":::Welcome to the Calculator:::\n");
  do{
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch(n) {
      case 1:
        //Addition
        printf("x+y, Enter x and y:\n");
        scanf("%d%d", &x, &y);
        printf("Result: %d\n", x+y);
        break;
      case 2:
        //Subtraction
        printf("x-y, Enter x and y:\n");
        scanf("%d%d", &x, &y);
        printf("Result: %d\n", x-y);
        break;
      case 3:
        //Multiplication
        printf("x*y, Enter x and y:\n");
        scanf("%d%d", &x, &y);
        printf("Result: %d\n", x*y);
        break;
      case 4:
        //Division
        printf("x/y, Enter x and y:(y should not be 0)\n");
        double a, b;
        scanf("%lf%lf", &a, &b);
        if(b!=0) {
          printf("Result: %lf\n", a/b);
        }
        else {
            printf("y can not be zero.\n");
        }
        break;
      default:
        printf("Valid choice only....\n");
    }
    printf("Continue(1/0): ");
    scanf("%d", &choice);
  }while(choice==1);
  printf("Thank You for using Calculator\n __/\\__");
  return 0;
}
