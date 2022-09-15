#include <stdio.h>
#include <stdlib.h>

//recursiva
int fibo_r(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fibo_r(n-1) + fibo_r(n-2);
}

//iterativa
int fibo(int n) {
  int fib[n];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i <= n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
  return fib[n];
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  pri+ntf("Fibonacci: %d\n", fibo(n));
  // printf("Fibonacci: %d\n", fibo_r(n));
  return 0;
}
