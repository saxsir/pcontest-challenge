
## 元の問題
[http://poj.org/problem?id=2386](http://poj.org/problem?id=2386)

## 解き方
* 深さ優先探索(dfs)で解く
* 適当な"W"から始めて, つながっている部分を"."に置き換える
* Wがなくなるまでに何回dfsが呼び出されたか数えればOK
