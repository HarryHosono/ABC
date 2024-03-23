/**
 *    auther:    deviceF
 *    created:   23.03.2024 19:36:54
**/
#include <bits/stdc++.h>

using namespace std;



int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
  	cin >> a[i];
  }
  vector<int> b(n - 1);
  for (int i = 1; i < n; i++) {
  	b[i] = a[i - 1] * a[i];
  }
  for (int i = 1; i < n; i++) {
  	cout << b[i] << " ";
  }
  return 0;
}
