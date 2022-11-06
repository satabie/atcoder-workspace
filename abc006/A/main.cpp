#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using vi = vector<int>;
using vii = vector<vi>;

int main() {
  int n;
  cin >> n;

  if (n % 3 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
