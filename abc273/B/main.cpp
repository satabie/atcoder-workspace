#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  long long x, k;
  cin >> x >> k;

  long long pow10 = 1;
  for (int i = 0; i < k; i++) {
    x /= pow10;
    long long m = x % 10;
    if (m < 5) {
      x -= m;
      x *= pow10;
    } else {
      x = x - m + 10;
      x *= pow10;
    }
    pow10 *= 10;
  }
  cout << x << endl;
  return 0;
}
