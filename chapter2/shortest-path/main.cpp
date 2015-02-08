#include <cstdio>
#include <algorithm>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i+=1)
#define REP(i,n)  FOR(i,0,n)

int N, M;
char field[100][100];

void solve() {
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
}
