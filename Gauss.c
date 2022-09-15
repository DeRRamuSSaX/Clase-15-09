#include <stdio.h>
#include <stdlib.h>

//recursiva
int num_r(int n) {
  if (n == 0) {
    return 0;
  }
  return n + num_r(n-1);
}

//iterativa
int num_nat(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  printf("Suma: %d\n", num_nat(n));
  return 0;
}
