#include <stdio.h>

unsigned long long add = 2, diff = 2, ans[1000001] = {0, 0, 0, 0, 1};

int main() {
  int n;
  for (n = 5; n <= 1000000; n++) {
    ans[n] = ans[n - 1] + add;
    add += diff;
    diff += !(n & 1);
  }
  while (scanf("%d", &n) && n >= 3) {
    printf("%llu\n", ans[n]);
  }
  return 0;
}
