#include <cstdio>
#include <queue>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i+=1)
#define REP(i,n)  FOR(i,0,n)

const int INF = 100000000;

int N, M;
char field[100][100];
char dist[100][100];

// 同じ大きさのフィールド作成
// 全部 INF で初期化
// S の座標を0にして、1ターンで行ける距離は1, 2ターンで行ける距離は2, ...みたいに数値を入れていく
// G に辿り着いたら終わり
int solve() {
  int ans = 0;
  return ans;
}

int main() {
  char dummy;

  // 入力
  scanf("%d%d", &N, &M);
  if (N == 0) return 0;

  // 改行コードを読み飛ばす
  scanf("%c", &dummy);

  REP(i, N) {
    REP(j, M) {
      scanf("%c", &field[i][j]);
    }
    scanf("%c", &dummy);
  }

  // 出力
  printf("%d\n", solve());
}
