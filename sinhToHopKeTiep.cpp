#include<bits/stdc++.h>
using namespace std;

//sinh tat ca to hop chap k cua n ptu
/*
	in:
	4 3
	out:
	123 124 134 234
*/

int n,k,a[1005],ok;

void ktao(){
	for(int i = 1 ; i <= k ; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 and a[i] == n-k+i){
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else {
		a[i]++;
		for(int j = i+1 ; j <= k ; j++){
			a[j] = a[j-1] + 1;
		}
	}
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
			for(int i = 1 ; i <= k ; i++){
				cout << a[i];
			}
			sinh();
			cout << " ";
		}
		cout << endl;
	}
}