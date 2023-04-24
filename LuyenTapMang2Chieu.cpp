#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][100] , int n , int m){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> a[i][j];
		}
	}
}

/*
***.
..**
**.*
*/
int main()
{
//	int a[100][100];
//	int n,m;
//	cin >> n >> m;
////	for(int i = 0 ; i < n ; i++){
////		for(int j = 0 ; j < m ; j++){
////			cin >> a[i][j];
////		}
////	}
//	//nhap(a,n,m);
////	for(int i = 0 ; i < n ; i++){
////		for(int j = 0 ; j < m ; j++){
////			cout << a[i][j] << " ";
////		}
////		cout << endl;
////	}
//	char c[100][100];
//	for(int i = 0 ; i < n ; ++i){
//		for(int j = 0 ; j < m ; j++){
//			cin >> c[i][j];
//		}
//	}
//	//nhu nay se khong nhan dau cach
//	for(int i = 0 ; i < n ; i++){
//		for(int j = 0 ; j < m ; j++){
//			cout << c[i][j];
//		}
//		cout << endl;
//	}

//	int n,m; cin >> n;
//	//Co n dong, moi dong co 1 vector
//	vector<int> a[n];
//	//Vd ta mong muon cac dong co so ptu khac nhau ntn:
//	//1 2 
//	//2 3 4
//	//1 4
//	//1 6 7 8 9
//	//==> Khong can moi dong co cung so luong ptu
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

//Doi voi mang char
//Neu muon luu so luong cac ki tu khac nhau tren moi dong thi dung string
//Coi moi dong la mot string la ok
//	int n,m; cin >> n;
//	string a[n];
//	cin.ignore();
//	for(int i = 0 ; i < n ; i++){
//		getline(cin, a[i]);
//	}
//	for(int i = 0 ; i < n ; i++){
//		cout << a[i] << endl;
//	}

//Co mot so bai tap ve thay doi chi so hang va cot

	int n,m; cin >> n >> m;
	int a[n][m];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++) cin >> a[i][j];
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
