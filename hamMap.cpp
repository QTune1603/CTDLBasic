#include<bits/stdc++.h>
#include<map>
using namespace std;

//O(logn)
//map: phu hop khi muon dem tan suat xuat hien
//map[key] = value
//map luu cac pair (key,value)
//insert
//count
//find
//erase
//order
//multimap

int main(){
	//map<datatype1, datatype2> mp;
	//map luu 1 cap 
	//map ko thay doi dc key giong set
//	map<int, int> mp;
//	mp[100] = 200; //(100,200)
//	mp[200] = 300; // (200,300)
//	mp.insert({300,400});
//	mp.insert({400,500});
//	cout << mp.size() << endl;
//	mp[100] = 300;
	//cap (100,200) da bi thay the bang cap (100,300)
	//cout << mp.size() << endl; //Kich thuoc map ko thay doi
	//value co the trung nhau con key thi khong
	
	
//Duyet map
	//Do map luu 1 cap nen cout ra phai co first va second
//	for(pair<int,int> x : mp){
//		cout << x.first << " " << x.second <<endl;
//	}
	//x.first(key) va x.second(value)
	//Hoac
//	for(auto x : mp){
//		cout << x.first << " " << x.second << endl;
//	}
	//Hoac duyet bang iterator
//	for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
//		cout << (*it).first << " " << (*it).second << endl;
	//duyet map xog co the tim kiem nhung chi tim kiem dc key
	
//	map<int, int> mp;
//	mp[100] = 200;
//	mp[200] = 300;
//	mp.insert({300,400});
//	mp.insert({400,500});
//	if(mp.count(500) != 0){ // Tim kiem key = 500
//		cout << "Found\n";
//	}
//	else {
//		cout << "Not Found!\n";
//	}
//	if(mp.find(100) != mp.end()){
//		cout << "Found !\n";
//	}
//	else{
//		cout << "Not found !\n";
//	}

//	mp.erase(100); //xoa cap map co key=100
//	for(auto it : mp){
//		cout << it.first << " " << it.second << endl;
//	}

//Bai toan: dem so lan xuat hien cua cac ptu trong mang,
//sau do in ra tan suat xuat hien cua tung ptu
//input
//8
//1 1 2 1 3 5 1 -4
//output in theo thu tu ptu tu be den lon
//-4 1
//1 4
//2 1
//3 1
//5 1
//Khi dung mang danh dau lam bai nay ta co mot so han che:
// cac ptu phai luon duong(+)
// tan suat xuat hien phai <= 10^7

//	int n; cin >> n;
//	map<int, int> mp;
//	for(int i = 0 ; i < n ; i++){
//		int x; cin >> x;
//		mp[x]++;
//	}
//	for(auto x : mp){
//		cout << x.first << " " << x.second << endl;
//	}
	
//output in theo thu tu tu lon den be cua tan suat xuat hien
//1 4
//2 1
//3 1
//5 1
//-4 1
//	int n; cin >> n;
//	map<int, int> mp;
//	int a[n];
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i];
//		mp[a[i]]++;
//	}
//	for(int i = 0 ; i < n ; i++){
//		if(mp[a[i]] != 0){
//			cout << a[i] << " " << mp[a[i]] << endl;
//			mp[a[i]] = 0;
//		}
//	}

//Dem tan suat xuat hien cua cac string nhap vao
//input 9
//python
//java
//string
//java
//python
//c++
//sql
//sql
//java

//	int n; cin >> n;
//	cin.ignore();
//	string s;
//	map<string,int> mp;
//	for(int i = 0 ; i < n ; i++){
//		getline(cin,s);
//		mp[s]++;
//	}
//	for(auto x:mp){
//		cout << x.first << " " << x.second << endl; 
//	}
	//Hoac neu muon in ra tu co tan suat xuat hien nhieu nhat
//	string res;
//	int max_fre = 0;
//	for(auto x:mp){
//		if(x.second >= max_fre){
//			max_fre = x.second;
//			res = x.first;
//		}
//	}
//	cout << res << " " << max_fre << endl;
	//Hoac de co 2 tu co cung tan suat xuat hien nhieu nhat va phai in ra tu co thu tu tu dien be hon
//input 10
//python
//java
//string
//java
//python
//c++
//sql
//sql
//java
//python
//output: java 3
//	string res;
//	int max_fre = 0;
//	for(auto x:mp){
//		if(x.second > max_fre){
//			max_fre = x.second;
//			res = x.first;
//		}
//	}
//	cout << res << " " << max_fre  << endl;
	//Hoac in ra ptu co thu tu tu dien lon hon
//	for(auto x:mp){
//		if(x.second >= max_fre){
//			max_fre = x.second;
//			res = x.first;
//		}
//	}
//	cout << res << " " << max_fre  << endl;
	
//multimap
	//multimap<int, int> mp;
	//Khong the gan ntn dc
//	mp[1] = 100;
//	mp[2] = 200;
//	mp[1] = 200;
	//Do multimap cho phep nhieu key co cung gtri
	//Phai dung insert
//	mp.insert({1,100});
//	mp.insert({2,200});
//	mp.insert({1,200});
//	for(auto it:mp){
//		cout << it.first << " " << it.second << endl;
//	} 
//	cout << mp.count(1) << endl; //2
	//cout << mp.count(100) << endl; //Dem key=100
	
	//unordered_map : khong theo thu tu 
		unordered_map<int, int> mp;
		mp.insert({1,100});
		mp.insert({2,200});
		mp.insert({1,200});
		for(auto x:mp){
			cout << x.first << " " << x.second << endl;
		}
}
	
