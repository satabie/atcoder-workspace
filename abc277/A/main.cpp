#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using vi = vector<int>;
using vii = vector<vi>;

int main() {
  int n, x;
  cin >> n >> x;

  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    if (p == x) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return -1;
}
