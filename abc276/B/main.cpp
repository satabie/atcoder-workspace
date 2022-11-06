#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using vi = vector<int>;
using vii = vector<vi>;

int main() {
  int n, m;
  cin >> n >> m;
  vii ans(n + 1);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    ans[a].push_back(b);
    ans[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    sort(all(ans[i]));
    cout << ans[i].size();
    for (int a : ans[i]) {
      cout << " " << a;
    }
    cout << endl;
  }
  return 0;
}
