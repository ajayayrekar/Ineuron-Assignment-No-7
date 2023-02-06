#include <stdio.h>
#include <math.h>

bool isArmstrong(int n) {
  int original = n;
  int digits = 0;
  int sum = 0;

  // Count number of digits in the original number
  while (n > 0) {
    digits++;
    n /= 10;
  }

  // Reset the value of n
  n = original;

  // Calculate the sum of each digit raised to the power of the number of digits
  while (n > 0) {
    int digit = n % 10;
    sum += pow(digit, digits);
    n /= 10;
  }

  // Return whether the sum is equal to the original number
  return sum == original;
}

int main() {
  int i;
  printf("Armstrong numbers under 1000: \n");
  for (i = 1; i < 1000; i++) {
    if (isArmstrong(i)) {
      printf("%d, ", i);
    }
  }
  return 0;
}
