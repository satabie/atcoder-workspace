#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using vi = vector<int>;
using vii = vector<vi>;

int main() {
  string s;
  cin >> s;

  int len = s.length();
  while (len) {
    len--;
    if (s[len] == 'a') {
      cout << len + 1 << endl;
      return 0;
    }
  }
  cout << (-1) << endl;

  return 0;
}
