#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//stable_sort: giu dc su on dinh cua thuat toan
//stable_sort : bubble, insertion sort, merge sort;
//sort
//sort(a, a+n,)  , sort(a+x, a+y+1) => a[x,y]
//sort(a.begin(), a.end()) , sort(a,begin() + x, a.begin()+y+1) => a[x, y]
//greater<int>

//hieu don gian: a dung truoc b
// sap xep giam dan(neu a>b tra ve true ==> sap xep giam dan)
//sap xep tang dan(neu a<b tra ve true ==> sap xep tang dan)
//sap xep tang dan(neu abs(a) < abs(b) tra ve true ==> sap xep tang dan)
//bool cmp(int a, int b){
//	return a > b;
//  return a < b;
//	return abs(a) < abs(b);
//}

bool cmp(string a, string b){
//	return a.length() > b.length(); //sap xep theo chieu dai giam dan
//	return a.length() < b.length(); // tang dan
	if(a.length() != b.length()){
		return a.length() > b.length();
	}
	return a < b;
}

int main(){
	//int n; cin >> n;
//	int a[1000];
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i];
//	}
	
//sap xep tang dan
//	sort(a,a+n); //a[x] => a[y] : sort(a+x,a+y+1)
//	for(int i = 0 ; i < n ; i++){
//		cout << a[i] << " ";
//	}
	
//sap xep giam  dan
//	sort(a, a+n, greater<int>());
//	for(int i = 0 ; i < n ; i++){
//		cout << a[i] << " ";
//	}

//vector
//	vector <int> a(n);
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i];
//	}
//	//tang dan
////	sort(a.begin(), a.end());
////	for(int i = 0 ; i < n ; i++){
////		cout << a[i] << " ";
////	}
//	
//	//giam dan
//	sort(a.begin(), a.end(), greater<int>());
//	for(int i = 0 ; i < n ; i++){
//		cout << a[i] << " ";
//	}

//string sap xep theo thu tu tu dien tang dan cac xau
//	int n; cin >> n;
//	string a[n];
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i];
//	}
//	//tang dan
//	//sort(a, a+n);
//	//giam dan
//	//sort(a, a+n ,greater<string>());
//	for(string x:a){
//		cout << x << " ";
//	}

//sap xep cac ki tu trong xau
//	string s;
//	getline(cin, s);
//	//tang dan
//	//sort(s.begin(), s.end());
//	
//	//giam dan
//	sort(s.begin(), s.end(), greater<char>());
//	cout << s;

//mac dinh sort se sap xep cac cap pair tang dan theo chi so first
//	int n; cin >> n;
//	pair<int, int> a[n];
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i].first >> a[i].second;
//	}
//	sort(a,a+n);
//	for(auto i : a){
//		cout << i.first << " " << i.second << endl;
//	}

//Bai toan:
//Sap xep cac ptu trong mang theo thu tu tang dan theo gia tri tuyet doi
//input: 8
//       1 -1 2 1 5 -2 -5 4
//output: 1 -1 1 2 -2 4 5 -5
//su dung stable_sort de giu nguyen dc vi tri sap xep
//	int n; cin >> n;
//	int a[n];
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i];
//	}
//	stable_sort(a, a+n, cmp);
//	for(int i:a){
//		cout << i << " ";
//	}
	
//sap xep cac tu theo thu tu chieu dai giam dan/tang dan
// trong truong  hop 2 tu co cung chieu dai
//tu nao co thu tu tu dien nho hon se in truoc
//input: 5
// python java php c sql
//output : python java php sql c
	
	int n; cin >> n;
	string a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	stable_sort(a, a+n ,cmp);
	for(int i = 0 ; i < n ; i++){
		cout << a[i] << ' ';
	}
}