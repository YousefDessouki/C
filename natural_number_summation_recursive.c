#include <stdio.h>

int addNumbers_recursive(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers_recursive(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
