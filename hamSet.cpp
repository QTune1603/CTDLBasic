#include<bits/stdc++.h>
using namespace std;

//set ko luu cac ptu giong nhau
//set phu hop khi ta muon tim kiem, dem so luong ptu khac nhau trong mang, cac tu khac nhau
//O(logn)
//insert
//size
//count
//find(iterator)
//erase
//Order

//multiset: giong set nhung co the luu cac gia tri giong nhau va dem tong cac gtri bao gom giong nhau
//multiset van sap xep cac ptu theo thu tu nhu set


//unordered_set: khac voi set la ko sap xep cac ptu theo thu tu, con lai thi giong het
int main(){
//	set<int> s;
//	s.insert(100);
//	s.insert(200);
//	s.insert(300);
//	s.insert(100);
//	s.insert(200);
//	cout << s.size() << endl; //output 3
	
	//set<int> s;
	//set dang co tu 0 toi 9
	//for(int i = 0 ; i < 10 ; i++){
	//	s.insert(i);
	//}
	//cout << s.size() << endl;
	//Tim xem 5 co nam trong set ko
	//O(logn)
//	if(s.count(5) != 0){
//		cout << "Found !\n";
//	}
//	else {
//		cout << "Not found !\n";
//	}
//Hoac:
	//find neu tra ve s.end() se khong tim thay
//	if(s.find(5) != s.end()){
//		cout << "Found !\n";
//	}	
//	else {
//		cout << "Not found !\n";
//	}
//set se luu cac ptu theo thu tu tu be den lon

	//set<int> s;
	//insert 10 ptu vao set
	//for(int i = 0 ; i < 10 ; i++){
	//	s.insert(i);
	//}
	//s.erase(5);
	//cout << s.size() << endl; // Xoa ptu 5 thi con 9
	
	//For each de xet:
	//for(int x : s){
	//	cout << x << " ";
	//}
	//cout << endl;
	//s.erase(5);
	//Hoac xoa theo iterator
	//s.erase(s.find(5));
	//for(int x : s){
	//	cout << x << " ";
	//}
	
//	set<int> s;
//	for(int i = 0 ; i < 10 ; i++){
//		s.insert(i);
//	}
//	for(int x : s){
//		cout << x << " ";
//	}

//Hoac dung auto(string,int,float,double,... thoai mai)
//	for(auto x : s){
//		cout << x << " ";
//	}
//	cout << endl;
	//Truy cap ptu dau tien(ptu min) trong set thong qua iterator
	//cout << *s.begin() << endl;
	//Truy cap ptu cuoi cung(ptu max) trong set
	//cout << *s.rbegin() << endl;
	
	
//Tong quat: vidu bt nhap vao set la cac so nguyen
//input 5
// 1 1 2 3 2
//cac so dc luu vao set se tu dong luu theo thu tu tu be den lon
//	int n; cin >> n;
//	set<int> s;
//	for(int i = 0 ; i < n ; i++){
//		int x ; cin >> x;
//		s.insert(x);
//	}
//	for(auto x : s){
//		cout << x << " ";
//	}
//	cout << endl;
//	cout << s.size() << endl;
	
//input 5
//java
//python
//java
//lap trinh
//python
//Cac chuoi dc luu vao set se theo thu tu tu dien tang dan

//	int n ; cin >> n;
//	cin.ignore();
//	set<string> s;
//	for(int i = 0 ; i < n ; i++){
//		string str;
//		getline(cin, str);
//		s.insert(str);
//	}
//	for(auto x : s){
//		cout << x << endl;
//	}
//	cout << endl;
//	cout << s.size() ;

//multiset
//	multiset<int> ms;
//	ms.insert(100);
//	ms.insert(200);
//	ms.insert(200);
//	ms.insert(100);
//	cout << ms.size() << endl;
//	for(auto x : ms){
//		cout << x << " ";
//	}
//	cout << endl;
//	//dem so luong ptu co gtri 100 trong multiset
//	cout << ms.count(100) << endl;
//	//Xoa 100 trong multi set la xoa tat ca cac ptu co gtri la 100
//	ms.erase(100);
//	for(auto x : ms){
//		cout << x << " ";
//	}
	//Neu chi muon xoa 1 ptu 100 trong multiset thi phai dung iterator
	
	
//bai toan maximum sliding window su dung multiset
//Cho 1 mang co n phan tu va so nguyen k, doi voi moi day con lien tiep co chieu dai k,
// in ra phan tu lon nhat trong day con do
//input :
//10 3
// 1 2 3 1 4 5 1 8 9 10
//output :
//3 3 4 5 5 8 9 10

//	int n,k; cin >> n >> k; 
//	int a[n];
//	for(int &x : a) cin >> x;
//	multiset<int> ms;
//	for(int i = 0 ; i < k ; i++){
//		ms.insert(a[i]);
//	}
//	for(int i = k ; i < n ; i++){
//		cout << *ms.rbegin() << " ";
//		ms.erase(ms.find(a[i-k]));
//		ms.insert(a[i]);
//	}
//	cout << *ms.rbegin() <<endl;

//unordered_set

	unordered_set<int> s;
//	for(int i = 0 ; i < 10 ; i++){
//		s.insert(i);
//	}
//	for(auto x : s){
//		cout << x << " ";
//	}
//	cout << endl;

	s.insert(300);
	s.insert(100);
	s.insert(200);
	s.insert(500);
	s.insert(200);
	s.insert(300);
	cout << s.size() << endl;
	for(auto x : s){
		cout << x << " ";
	}
	return 0;
	
}
