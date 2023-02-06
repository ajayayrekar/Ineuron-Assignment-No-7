#include <stdio.h>

int isPerfectSquare(int x) {
  int s = (int)(sqrt(x));
  return (s*s == x);
}

int isFibonacci(int n) {
  return isPerfectSquare(5*n*n + 4) ||
         isPerfectSquare(5*n*n - 4);
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (isFibonacci(n)) {
    printf("%d is in the Fibonacci series\n", n);
  } else {
    printf("%d is not in the Fibonacci series\n", n);
  }
  return 0;
}
