/**
 *    auther:    Harry Crown Hosono
  
 *    created:   11.02.2024 12:27:49
**/

#include <bits/stdc++.h>

using namespace std;



int main(){
  ios::sync_with_stdio(false);  
  cin.tie(0);
	int n;
	cin >> n;
	vector<int> ans;
	while(n--){
		int q;
		cin >> q;
		switch(q){
			case 1:
				int x;
				cin >> x;
				ans.push_back(x);
				break;
			case 2:
				int y;
				cin >> y;
				int size = ans.size() - 1;
				cout << ans[size - (y - 1)] << endl;	
				break;
		}

	}
  return 0;
}
