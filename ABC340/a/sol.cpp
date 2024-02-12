/**
 *    auther:    Harry Crown Hosono
  
 *    created:   11.02.2024 12:25:16
**/

#include <bits/stdc++.h>

using namespace std;



int main(){
  ios::sync_with_stdio(false);  
  cin.tie(0);
	int a, b, d;
	cin >> a >> b >> d;
	vector<int> ans;
	for(int i = a; i <= b; i += d){
		ans.push_back(i);	
	}
	for(auto i : ans){
		cout << i << " ";
	}
	cout << endl;
  return 0;
}
