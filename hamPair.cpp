#include<bits/stdc++.h>
using namespace std;

//pair<datatype1, datatype2> v;
//v.first(datatype1)
//v.second(datatype2)
//make_pair(a,b)
//{a,b}
//pair<pair<int,int>, int >> v;
//tuple<datatype1, datatype2, datatype3> t{1,2,3}
//truy cap vao tuple get<chi so>(ten tuple)

int main(){
	//thuong duoc su dung
//	pair<int,int> v;
//	pair<string, int> v;
	
	//Ngoai ra con nhieu kieu khac vidu nhu:
//	pair<long long, long long> v;

//	pair<int,int> v;
	//Ko khai bao thi mac dinh la 0
	
	//pair<int,int> v = make_pair(100,200);
	//Hoac:
//	pair<int,int> v = {100,200};
//	cout << v.first << endl;
//	cout << v.second << endl;

//Neu muon luu 3 cap hay nhieu cap so
	//Cach nay hoi phuc tap
	//pair<pair<int,int>, int>> v; 
	
	//Hoac
	//tuple<int,int,int> t{1, 2, 3};
	//tuple luu nhieu kieu du lieu khac cung dc
	//truy cap vao tuple
	//cout << get<1>(t) << endl;
	//get<1>,get<2>,get<3>
	tuple<string, int , string> t = make_tuple("java", 100, "python");
	cout << get<0>(t) << endl;
	cout << get<1>(t) << endl;
	cout << get<2>(t) << endl;
}
