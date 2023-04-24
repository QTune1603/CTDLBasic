#include<bits/stdc++.h>
using namespace std;

/*
	kiem tra xem to hop chap k cua n ptu tiep theo 
	co bao nhieu ptu khac voi to hop hien tai
*/

int n,k,a[1005],ok;
set<int> se;

void sinh(){
	int i = k;
	while(i >= 1 and a[i] == n-k+i){
		--i;
	}
	if(i == 0){
		cout << k << endl;
	}
	else {
		a[i]++;
		for(int j = i+1 ; j <= k ; j++){
			a[j] = a[j-1] + 1;
		}
		int cnt = 0;
		for(int i = 1 ; i <= k ; i++){
			if(se.find(a[i]) == se.end()){ //neu ko tim thay
				++cnt;
			}
		}
		cout << cnt << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1 ; i <= k ; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		sinh();
		se.clear();
	}
}