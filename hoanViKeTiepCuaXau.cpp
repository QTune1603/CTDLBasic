#include<bits/stdc++.h>
using namespace std;

int n;

void sinh(string s){
	int i = s.length() - 2;
	while(i >= 0 and s[i] >= s[i+1]){
		i--;
	}
	if(i == -1){
		cout << "BIGGEST\n";
	}
	else {
		int j = s.length() - 1;
		while(s[i] >= s[j]){
			j--;
		}
		swap(s[i],s[j]);
		reverse(s.begin()+i+1, s.end());
		cout << s << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		int tc; cin >> tc;
		string s; cin >> s;
		cout << tc << " ";
		//sinh(s);
		if(next_permutation(s.begin(), s.end())){
			cout << s << endl;
		}
		else {
			cout << "BIGGEST\n";
		}
	}
}