#include<bits/stdc++.h>
using namespace std;

//string la 1 mang cac ki tu
//cin.ignore()
//getline(cin,s)
//length()
//size()
//compare()
//  a < b : -1
//  a == b : 0
//  a > b : 1
//substr(vi tri bat dau cat, so luong ki tu muon cat)
// neu ko co tham so thu2 thi se cat xau tu vi tri bat dau den het
//stoi() : chuyen string thanh integer
//stoll(): chuyen string thanh long long
//to_string : chuyen dang so nguyen, so thap phan thanh xau
//stringstream ss (ten cua xau) : tach cac tu trong 1 xau
//transform(s.begin(), s.end(), s.begin(), ::toupper)
//transform(s.begin(), s.end(), s.begin(), ::tolower)


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
// Nhap Xuat
//	int n; 
//	cin >> n; // van con phim enter nen khong the nhap string dc
//	cin.ignore();// xoa phim enter, ko truyen tham so thi xoa 1 ki tu
//	string s;
//	//cin >> s; // ko nhap dc dau cach
//	getline(cin, s); // doc dc ca dau cach va dung khi gap enter
//	cout << s;
	
//truy cap
	//string s = "python";
	//cout << s[1]; //y
	//do dai xau ky tu dung ham length() va size()
	//cout << s.length() << endl;
	//cout << s.size() << endl;
	
	//for(int i = 0; i < s.length() ; i++){
	//	cout << s[i] << endl;
	//}
	//for(char x:s) cout << x << endl; // tuong tu ham for o tren
	
//Noi chuoi
//	string a = "python";
//	string b = "java";
//	string c = a + b; // theo thu tu la pythonjava va nguoc lai javapython
//	a += b; // giong nhu c (Ko co dau '-')
//	cout << c << endl;
//	cout << a << endl;

//So sanh 2 xau
//	string a = "abc";
//	string b = "def";
	//so sanh theo thu tu tu dien
	//do def co thu tu tu dien lon hon ne a < b
//	if(a > b){
//		cout << "a lon hon b" << endl;
//	}
//	else if(a == b){
//		cout << "a giong b" << endl;
//	}
//	else {
//		cout << "a nho hon b" << endl;
//	}
	//cung co the dung ham co san
	//cout << a.compare(b) << endl;
	
//cat xau
//	string a  = "abcdef";
//	string b = a.substr(2, 3);
//	cout << b;

//chuyen dang(string) xau thanh dang so nguyen(int)
//	string a = "123456124512525";
//	//int x = stoi(a); //thanh interger
//	long long x = stoll(a); // thanh long long
//	cout << x;

//chuyen so thanh xau
//	int n = 123.456; // float cung ok
//	string s = to_string(n);
//	cout << s << endl;

//Tach tung tu(neu chi co dau cach)
//	string s = "java python    php lap trinh";
//	stringstream ss(s);
//	string tmp;
//	int cnt = 0;
//	while(ss >> tmp){
//		cout << tmp << endl; //in ra hoac xu li tuy minh
//		++cnt;
//	}
//	cout << cnt;
//Tach dau (Ko hay dung)
//	string s = "java.python.php.lap.trinh";
//	stringstream ss(s);
//	string tmp;
//	while(getline(ss,tmp,'.')){
//		cout << tmp << endl;
//	}

//Chuyen xau in thuong thanh in hoa
//	string s = "lap trinh thi dau";
//	transform(s.begin(), s.end(), s.begin(), ::toupper);
//	cout << s;

//Chuyen xau in hoa thanh in thuong
	string s = "HOC VIEN CONG NGHE BUU DIEN";
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s;
	return 0;
}