// Варіан 13

#include <stdio.h>

int main() {
  int m, k, n, p = 1;
  print("Число: ");
  scanf("%d", &m);
  for (k = 1; k <= m; k++) {
    n = 2 * k + 1;
    p *= n;
  }
  printf("%d\n", p);
  return 0;
}
