#include <stdio.h>
#include <stdlib.h>

//version recursiva
int fact_r(int n) {
  if (n == 0) { // Caso Base
    return 1;
  }
  return n * fact_r(n-1); //paso reductivo
}

//version iterativa
int fact(int n) {
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  printf("el factorial de %d es %d\n", n, fact(n));
  return 0;
}
