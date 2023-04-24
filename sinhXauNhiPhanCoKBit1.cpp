#include<bits/stdc++.h>
using namespace std;

//sinh tap con ke tiep
/*
	5 3
	1 4 5
	out:
	2 3 4
*/

int n,a[1005],ok,k;

void ktao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 and a[i] == 1){
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
	int cnt = 0;
	for(int i = 1 ; i <= n ; i++){
		cnt += a[i];
	}
	return cnt == k;
	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ok = 1;
		ktao();
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