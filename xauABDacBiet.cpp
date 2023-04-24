#include<bits/stdc++.h>
using namespace std;

/*
	input:5 3
	out:
	5
	AAABA
	AAABB
	ABAAA
	BAAAB
	BBAAA
	
-in ra cac xau AB co k do dai A lien tiep(lon hon hay be hon k ko dc)
-1 xau co 2 day co do dai k cung ko dc (AAABAAA)
*/

int n,k,a[100],ok;

void ktao(){
	for(int i = 1 ; i <= k ; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 and a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else {
		a[i] = 1;
	}
}
bool check(){
	int dem = 0, res = 0;
	for(int i = 1 ; i <= n ; i++){
		if(a[i] == 0) {
			dem++;
		}
		else {
			dem = 0;
		}
		if(dem > k){
			return false;
		}
		if(dem == k){
			++res;
		}
	}
	return res == 1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	vector<vector<int>> v;
	int res = 0;
	ok = 1;
	ktao();
	while(ok){
		if(check()){
			vector<int> tmp(a+1, a+n+1); //copy mang a vao tmp
			v.push_back(tmp);
		}
		sinh();
	}
	cout << v.size() << endl;
	for(auto it:v){
		for(auto x:it){
			if(x == 1) cout << "B";
			else cout << "A";
		}
		cout << endl;
	}
	return 0;
}