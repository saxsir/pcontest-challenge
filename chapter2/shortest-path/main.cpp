#include <cstdio>
#include <queue>

using namespace std;

typedef pair<int, int> P;

#define FOR(i,a,b) for(int i=(a);i<(b);i+=1)
#define REP(i,n)  FOR(i,0,n)

const int INF = 100000000;

int N, M;
char field[100][100];
int dist[100][100];
int dx[4] = {1, 0, -1, 0},
    dy[4] = {0, 1, 0, -1};

int sx, sy;
int gx, gy;

queue<P> que;

void bfs() {
  for(;;) {
    // キューが空だったらreturn
    if (que.size() <= 0) return;

    // キューの先頭を取り出す
    P p = que.front();
    que.pop();

    // 取り出してきた状態がゴールならreturn
    if (p.first == gx && p.second == gy) return;

    // 取り出してきた状態から4方向に移動できるか調査
    REP(i, 4) {
      int nx = p.first + dx[i],
          ny = p.second + dy[i];

      // 移動できる かつ 今まで訪れたことがなければキューに追加してdistを取り出してきた状態+1で確定する
      if (0 <= nx && nx < N && 0 <= ny && ny < M &&
          field[nx][ny] != '#' && dist[nx][ny] == INF) {
        dist[nx][ny] = dist[p.first][p.second] + 1;
        que.push(P(nx, ny));
      }
    }
  }
}

int solve() {
  // 全ての点を INF で初期化
  REP(i, N) {
    REP(j, M) {
      dist[i][j] = INF;
      // ついでにスタート地点の座標を取得
      if (field[i][j] == 'S') {
        sx = i;
        sy = j;
      }
      // ついでにゴール地点の座標を取得
      if (field[i][j] == 'G') {
        gx = i;
        gy = j;
      }
    }
  }

  // Sの座標を0, キューの先頭に追加して幅優先探索スタート
  dist[sx][sy] = 0;
  que.push(P(sx, sy));
  bfs();

  return dist[gx][gy];
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
