#include<bits/stdc++.h>
using namespace std;

//sinh ra cac xau AB co do dai n
/*
	input: 2
	output: AA AB BA BB
*/

int n,a[1005],ok;

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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		ktao();
		while(ok){
			for(int i = 1 ; i <= n ; i++){
				if(a[i]) cout << "B";
				else cout << "A";
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}