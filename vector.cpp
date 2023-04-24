#include<bits/stdc++.h>
using namespace std;

//Mang dong: mang co the tu dong tang kich thuoc
//vector<kieu du lieu> ten_vector

//Cac ham co ban trong vector:
//Ban dau vector la rong
//front(): tra ve phan tu dau tien
//back(): tra ve phan tu cuoi cung
//push_back(): them 1 ptu vao cuoi trong vector, vector tu dong tang size
//pop_back(): xoa 1 ptu o cuoi vector
//size() : tra ve so luong ptu trong vector
//clear(): xoa toan bo cac ptu trong vector
//empty(): Tra ve true neu vector rong(size=0), nguoc lai tra ve false
//insert(vi tri iterator, value) : vidu(v.insert(v.begin()+2, 15) : them 15 vao chi so 2
//erase(vi tri iterator): vidu : v.erase(v.begin()+2): xoa ptu o chi so 2
//assign(so ptu, value): gan cac ptu trong vector voi cung 1 gia tri
//resize(kich thuoc muon thay doi):thay doi kich thuoc cua vector
//vidu: 
//vector<int> v(5,28);
//for(int x:v) cout << x << " ";
//cout << endl;
//v.resize(3);
//for(int x:v) cout << x << " ";
//ouput: 28 28 28 28 28
//		 28 28 28	
//reverse(v.begin(), v.end()): lat nguoc vector
//reverse(v.begin()+l, v.begin()+r+1): lat nguoc vector trong doan tu l den r
//*min_element(v.begin(), v.end()): in ra ptu nho nhat trong vector
//*max_element(v.begin(), v.end()): in ra ptu lon nhat trong vector
// accumulate(v.begin(), v.end(), 0): tong cac ptu trong vector

//truy cap cac phan tu trong vector thong qua chi so
//Duyet cac ptu trong vector bang index 
//Duyet bang for each
//Duyet bang iterator
//vector<int> v
//vector<int> v(n)
//vector<int> v(n, value)

int main()
{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	cout << v.size() <<endl;
//	v.push_back(40);
//	cout <<v.size() << endl;
//	cout << "Phan tu dau tien trong vector: " << v[0] << endl;
//	cout << "Phan tu cuoi cung trong vector: " << v[v.size()-1] << endl;
//	cout << "Phan tu cuoi cung trong vector: " << v.back() << endl;

//	for(int i = 0 ; i < v.size() ; i++){
//		cout << v[i] << endl;
//	}

//Duyet bang for each:
//	for(int x : v){
//		cout << x << endl;
//	}

//Duyet bang iterator(con tro tro den 2 ptu trong vector)
//	for(vector<int>::iterator it = v.begin() ; it != v.end() ; ++it){
//		cout << *it << endl;
//	}
//Hoac:
//auto co the thay cho rat nhieu thu bao gom ca iterator
//Nhung auto cham hon index
//	for(auto it = v.begin() ; it != v.end() ; ++it){
//		cout << *it << endl;
//	}

//truy cap vao ptu co index = 2(30)
//	cout << v[2] << endl;
//	cout << *(v.begin() + 2) << endl;


//Neu de bao khai bao mang n ptu ma muon dung vector
//	int n; cin >> n;
	//vector<int> v(n); //khai bao vecto nhung da co san n ptu v[n]
	//Tuong duong voi : int a[n]
//	for(int i = 0 ; i < n ; ++i){
//		cin >> a[i];
//	}
	
	//Neu muon luu ptu vao trong vector
	//vd input 5
	//1 2 3 4 5
//	vector<int> v;
//	for(int i = 0 ; i < n ; i++){
//		int x ; cin >> x;
//		v.push_back(x);
//	}

//Tao 1 vector va chi dinh so luong ptu va khoi tao gtri ban dau cho tat ca cac ptu	
//	int n; cin >> n;
//	vector<int> v(n, 100);
//	for(int i = 0 ; i < n ; i++){
//		cout << v[i] << endl;
//	}
	//Co the noi rong vector nay ra
	//v.push_back(20);
	
//vector co the luu cac kieu du lieu khac nhau nhu string , long long , ...
//	vector<string> v;
//	v.push_back("lap trinh");
//	v.push_back("DSA");
//	for(int i = 0 ; i < v.size() ; i++){
//		cout << v[i] << endl;
//	}

//Vd luu cac tu tach dc trong string vao vector
	string s = "ngon ngu   lap trinh  java";
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(string x : v){
		cout << x << endl;
	}
//	return 0;
} 
