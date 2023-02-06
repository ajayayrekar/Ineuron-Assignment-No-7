#include <stdio.h>

int fibonacci(int n) {
  int f[n+1];
  int i;

  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++) {
    f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("The %dth term of the Fibonacci series is %d\n", n, fibonacci(n));
  return 0;
}
