/**
 *    auther:    deviceF
 *    created:   23.03.2024 20:59:31
**/
#include <bits/stdc++.h>

using namespace std;



int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int w, b;
  cin >> w >> b;
  string s = "wbwbwwbwbwbw";
  for (int i = 0; i <= w + b + 12; i += 12) {
  	s += "wbwbwwbwbwbw";
  }
  for (int i = 0; i < (int)s.size(); i++) {
  	for (int j = i; j < (int)s.size(); j++) {
  		string t = s.substr(i, j - i);
  		int w_res = 0;
  		int b_res = 0;
  		for (int k = 0; k < (int)t.size(); k++) {
  			if (t[k] == 'w')	{
  				++w_res;
  			} else if (t[k] == 'b') {
  				++b_res;
  			}
  		}
  		if (w_res == w && b_res == b) {
  			cout << "Yes" << '\n';
  			return 0;
  		}
  	}
  }
  cout << "No" << '\n';	
  return 0;
}
