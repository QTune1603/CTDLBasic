#include<bits/stdc++.h>
using namespace std;


int n,a[1005];

void ktao(){
	for(int i = 0 ; i < n ; i++){
		a[i] = n-i;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		do{
			for(int i = 0 ; i < n ; i++){
				cout << a[i];
			}
			cout << " ";
		}while(prev_permutation(a,a+n));
		cout << endl;
	}
}