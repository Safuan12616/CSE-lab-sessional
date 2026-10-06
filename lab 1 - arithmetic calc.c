#include<stdio.h>

int main() {
  int a, b;
  printf("Enter your two numbers: \n");
  scanf("%d %d", &a, &b);
  printf("Addition = %d\n", a+b);
  printf("Subtraction = %d\n", a-b);
  printf("Multiplication = %d\n", a*b);
  printf("Divison = %d\n", a/b);
  printf("Modulas = %d\n", a%b);
  return 0;
}
