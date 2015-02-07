#include <cstdio>
#include <algorithm>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i+=1)
#define REP(i,n)  FOR(i,0,n)

int L, n;
int mi, ma;

void solve(int *L, int *n, int *x);

int main() {
  for (;;) {
    /*
     * 問題の読み込み
     */
    scanf("%d%d", &L, &n);
    if (L == 0) return 0;

    int x[n];
    REP(i, n) {
      scanf("%d", &x[i]);
    }

    solve(&L, &n, x);

    // 出力
    printf("%d %d\n", mi, ma);
  }
}

void solve(int *L, int *n, int *x) {
  int minT = 0;
  REP(i, *n) {
    minT = max(minT, min(x[i], *L - x[i]));
  }

  int maxT = 0;
  REP(i, *n) {
    maxT = max(maxT, max(x[i], *L - x[i]));
  }

  mi = minT;
  ma = maxT;

}
