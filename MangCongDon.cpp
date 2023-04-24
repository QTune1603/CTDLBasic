#include<bits/stdc++.h>
using namespace std;

int prefix[100];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	//Mang 1 chieu
//	int n; cin >> n;
//	int a[n+1];
//	for(int i = 1 ; i <= n ; i++) cin >> a[i];
//	int prefix[n+1];
//	for(int i = 1 ; i <= n ; i++){
//		prefix[i] = prefix[i-1] + a[i];
// 	}
//	int t; cin >> t;
//	while(t--){
//		int l,r;
//		cin >> l >> r;
//		cout << prefix[r] - prefix[l-1] << endl;
//	}
	
	//Mang 2 chieu
	/*
		4 4
		1 2 3 4 
		5 6 7 8
		2 2 1 3
		4 2 6 8
		1
		2 3 2 3
	*/
	
//prefix[i][j]: tong tat ca cac ptu cua hcn bat dau tu hang 1, ket thuc o hang i, bat dau o cot 1, ket thuc o cot j
	int n,m;
	cin >> n >> m;
	int a[n+1][m+1];
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cin >> a[i][j];
		}
	}
	int prefix[n+1][m+1];
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j];
		}
	}
	int q; cin >> q;
	while(q--){
		int h1,h2,c1,c2;
		cin >> h1 >> h2 >> c1 >> c2;
		cout << prefix[h2][c2] - prefix[h1-1][c2] - prefix[h2][c1-1] + prefix[h1-1][c1-1] << endl;
	}
}