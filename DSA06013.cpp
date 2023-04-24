#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout .tie(NULL);
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		vector<int> a(1e6+1,0);
		for(int i = 0 ; i < n ; i++){
			int v; cin >> v;
			a[v]++;
		}
		if(a[x]) cout << a[x] << endl;
		else cout << "-1" << endl;	
	}
}
