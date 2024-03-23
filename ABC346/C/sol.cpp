/**
 *    auther:    deviceF
 *    created:   23.03.2024 20:59:31
**/
#include <bits/stdc++.h>

using namespace std;



int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
 	long long n, k;
 	cin >> n >> k;
 	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];	
	}
	long long sum = (k + 1) * k / 2;
	set<long long> z;
	for (int i = 0; i < n; i++) {
		if (z.count(a[i])) {
			continue;
		} else if (a[i] <= k && a[i] >= 1){
			sum -= a[i];
			z.insert(a[i]);
		}
	}
	cout << sum << '\n';
  return 0;
}
