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
  vi p(n);
  rep(i, n) cin >> p[i];

  int j = n - 2;
  while (p[j] < p[j + 1]) { // p_j > p_j+1になるまで
    j--;
  }

  int k = n - 1;
  while (p[j] < p[k]) { // p_j> p_k になるまで
    k--;
  }
  swap(p[j], p[k]);
  reverse(p.begin() + j + 1, p.end());

  rep(i, n) { cout << p[i] << " \n"[i + 1 == n]; }

  return 0;
}
