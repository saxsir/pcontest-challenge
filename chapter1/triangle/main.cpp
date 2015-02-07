#include <cstdio>
using namespace std;

int n;
int a[100];

int main() {
  for (;;) {
    /*
     * 問題の読み込み
     */
    scanf("%d", &n);
    if (n == 0) return 0;

    for (int i=0; i<n; i++) {
      scanf("%d", &a[i]);
    }
  }
}
