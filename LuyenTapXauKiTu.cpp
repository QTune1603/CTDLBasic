#include<bits/stdc++.h>
using namespace std;

//Muon luu 1 xau ki tu ta can kieu du lieu string
//length(), size()
//cin.ignore , getline(cin,s)
// a += b, c = a+b;
//a.compare(b) :
// a < b: -1
// a == b : 0
// a > b : 1
//substr
//stoi
//stoll
//to_string
//stringstream
//find


int main()
{
//	string s ;
//	int n; 
//	cin >> n;
	//Khi nhap n ta se khong nhap dc string do phim enter
	//Ta phai dung cin.ignore()
	//cin.ignore(); 
	//Neu ko truyen tham so vao cin.ignore() thi mac dinh se la 1 
		
	//cin se bi dung khi gap dau cach
	//cin >> s;
	
	// muon doc 1 xau co dau cach ta dung getline
	//getline se dung khi gap phim enter
//	getline(cin, s);
//	cout << s << endl;

	//Truy cap vao tung ptu trong xau string
//	string s = "python";
//	cout << s[1] << endl;

//Ta se khong biet dc xau co do dai bao nhieu 
//Dung length de biet xau dai bao nhieu ki tu
//Va ham size tuong tu ham length
//	string s = "python";
//	cout << s.length() << endl;
//	cout << s.size() << endl;
//	cout << s << endl;
	
//Khi xu li cac ki tu trong xau ta se dung 2 ham tinh do dai tren
	//string s = "python";
//	for(int i = 0 ; i < s.length(); i++){
//		cout << s[i] << endl;
//	}
	//Hoac
//	for(char x : s){
//		cout << x << endl;
//	}

	//Noi cac chuoi voi nhau
//	string a = "python";
//	string b = "java";
	//string c = a + b;
	//c = b + a se nguoc lai
	//cout << c << endl;
	//Hoac ta co the noi theo cach nay:
	//Ca 2 cach tuong tu nhau
	//Khong dung dc dau "-"
//	a += b;
//	cout << a << endl;

//So sanh 2 xau 
	
	//Neu do dai 2 xau dai bang nhau thi se so sanh theo thu tu tu dien
//	string a = "abc";
//	string b = "def";
//	if(a > b){
//		cout << "a lon hon b\n";
//	}
//	else if(a == b){
//		cout << "a giong b\n";
//	}
//	else {
//		cout << "a be hon b\n";
//	}

	//Ta co the dung ham compare de so sanh
	//Neu a be hon b thi output la -1
	//a bang b thi output la 0
	//a lon hon b thi output la 1
	//compare se ko tien bang cac toan tu
//	cout << a.compare(b) << endl;

//Cat chuoi 
	//Muon cat 1 chuoi ta dung substr()
	//substr(vi tri bat dau muon cat , so ki tu muon cat ke tu vi tri muon cat)
	//string a = "abcdef";
	//string b = a.substr(2,3);
	//a[2] = c
	//Ke tu a[2] cat 3 ki tu ta dc string b = cde
	
	//Neu substr(chi co vi tri bat dau muon cat)
	//Thi se mac dinh cat tu vi tri do den het string
//	string b = a.substr(2);
//	cout << b << endl;

//Chuyen xau cac so nguyen thanh cac so nguyen
	//stoi() chuyen xau ve dang so nguyen interger
	//string a = "123456";
	//123456 dang o dang string
	//int x = stoi(a);
	//123456 o dang so nguyen integer
	
	//stoll() chuyen xau ve dang so nguyen long long
//	string a = "1231313541413";
//	long long x = stoll(a);
//	cout << x << endl;

//Chuyen 1 so thanh 1 xau string
	//to_string()
	//int n = 12345; 
	// n la so nguyen
	//n la float cung ok nhung thuong se dung int 
	//string s = to_string(n);
	//n la 1 xau ki tu string n = "12345"
	//cout << s << endl;
	
//Tach cac tu trong 1 xau
	//Su dung stringstream tenxau(luong can tach)
	//stringstream mac dinh tach cac dau cach
	
	//string s = "java python   php lap  trinh";
//	stringstream ss(s);
//	string tmp;
//	int cnt = 0;
//	while(ss >> tmp){
//		cnt++;
//		cout << tmp << endl;
//	}
//	cout << cnt << endl;
	
	//stringstream tach theo cac ki tu khac
//	string s = "java.c++.php.python.lap.trinh";
//	stringstream ss(s);
//	string tmp;
//	//Tach theo dau "."
//	//Thuong khong dc su dung nhieu
//	while(getline(ss,tmp,'.')){
//		cout << tmp << endl;
//	}
	


//Vd bai toan nhap vao 2 xau, xoa xau 2 khoi xau 1
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	auto it = str1.find(str2);
	if(it != -1){ //tim thay 
		str1.erase(str1.begin() + it ,str1.begin() +str2.length() + 1);
		cout << str1;
	}
	return 0;	
}
