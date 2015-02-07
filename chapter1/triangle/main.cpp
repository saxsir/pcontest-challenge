#include <cstdio>
#include <algorithm>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i+=1)
#define REP(i,n)  FOR(i,0,n)

int n;
int a[100];

int solve(int *n, int *a);

int main() {
  for (;;) {
    /*
     * 問題の読み込み
     */
    scanf("%d", &n);
    if (n == 0) return 0;

    REP(i, n) {
      scanf("%d", &a[i]);
    }

    // 出力
    printf("%d\n", solve(&n, a));
  }
}

// 最も長い棒の長さ < 他の2本の棒の長さの和
// になれば三角形が作れる.
int solve(int *n, int *a) {
  int ans = 0;

  REP (i, *n) {
    FOR (j, i+1, *n) {
      FOR (k, j+1, *n) {
        int len = a[i] + a[j] + a[k];
        int ma = max(a[i], max(a[j], a[k]));
        int rest = len - ma;

        if (ma < rest) {
          ans = max(ans, len);
        }
      }
    }
  }

  return ans;
}
