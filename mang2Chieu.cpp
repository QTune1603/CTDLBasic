#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//mảng 2 chiều kiểu char ko đọc dấu cách mà chỉ đọc kí tự
	//nhập vào n dòng và mỗi dòng chưa biết trước số lượng ptu
	//khai báo n dòng và mỗi dòng có m vector
	//vd:
	//1 2 
	//2 3 4
	//1 4
	//1 6 7 8 9
	int n; cin >> n;
//	vector<int> a[n];
//	for(int i = 0 ; i < n ; i++){
//		int m; cin >> m;
//		for(int j = 0 ; j < m ; j++){
//			int x; cin >> x;
//			a[i].push_back(x);
//		}
//	}
//	for(int i = 0 ; i < n ; i++){
//		for(int j = 0 ; j < a[i].size() ; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}

	//tuong tu voi string
	string a[n];
	cin.ignore();
	for(int i = 0 ; i < n ; i++){
		getline(cin, a[i]);
	}
	for(int i = 0 ; i < n ; i++){
		cout << a[i] << endl;
	}
	return 0;
}