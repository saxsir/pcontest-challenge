#include <cstdio>
#include <algorithm>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i+=1)
#define REP(i,n)  FOR(i,0,n)

int N, M;
char dummy; //改行文字を読み込むダミー変数
char field[100][100];

void dfs(int x, int y) {
  field[x][y] = '.';

  FOR(dx, -1, 2) {
    FOR(dy, -1, 2) {
      int nx = x + dx, ny = y + dy;

      if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') {
        dfs(nx, ny);
      }
    }
  }
  return;
}

int solve() {
  int ans = 0;

  REP(i, N) {
    REP(j, M) {
      if (field[i][j] == 'W') {
        dfs(i, j);
        ans += 1;
      }
    }
  }

  return ans;
}

int main() {
  // 入力
  scanf("%d%d", &N, &M);
  scanf("%c", &dummy); //改行文字を捨てる

  REP(i, N) {
    REP(j, M) {
      scanf("%c", &field[i][j]);
    }
    scanf("%c", &dummy);
  }

  // 出力
  printf("%d\n", solve());
}
