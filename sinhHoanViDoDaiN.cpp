#include<bits/stdc++.h>
using namespace std;



int n,a[1005];

void ktao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = i;
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
			for(int i = 1 ; i <= n ; i++){
				cout << a[i];
			}
			cout << " ";
		}while(next_permutation(a+1,a+n+1));
		cout << endl;
	}
}