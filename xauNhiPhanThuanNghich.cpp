#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok;

//sinh ra xau co do dai n thuan nghich 
void ktao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else {
		a[i] = 1;
	}
}

bool check(){
	int l = 1 , r = n;
	while(l < r){
		if(a[l] != a[r]){
			return false;
		}
		++l; --r;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok = 1;
		while(ok){
			if(check()){
				for(int i = 1 ; i <= n ; i++){
					cout << a[i];
				}
				cout << " ";
			}
			sinh();
		}
		cout << endl;
	}
}