#include <stdio.h>

int main() 
{
// Print the multiplication table for any number
  int number;
  printf("Enter a number: \n");
  scanf("%d",&number);
  int i;
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }

  return 0;
}  