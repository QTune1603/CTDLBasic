#include<bits/stdc++.h>
using namespace std;

//Ten, gpa, dia chi, msv

//co ban:
/*struct ten_struct{
	//member
};*/

//struct co the chua ca 1 ham
//struc co chua constructor(Khong co kieu du lieu tra ve, trung ten voi struct)
struct SinhVien{
	string msv;
	string ten;
	double gpa;
	string dc;
	
	//chua ham
	void in(){
		cout << msv << " " << ten << " " << fixed << setprecision(2) << gpa << " " << dc << endl;
	}
	
	//Constructor ko tham so
	SinhVien(){
		//Ta co the bo trong ham nay cung dc
		msv = "B21DCDT239";
		ten = "TRAN QUANG TUNG";
		gpa = 3.0;
		dc = "Thanh Hoa";
	}
	
	//Co the co nhieu constructor
	//constructor co tham so
	SinhVien(string ma, string name, double diem, string diachi){
		msv = ma;
		ten = name;
		gpa = diem;
		dc = diachi;
	}
	void nhap(){
		cin >> msv;
		cin.ignore();
		getline(cin, ten);
		cin >> gpa ;
		cin.ignore();
		getline(cin, dc);
	}
};


//nap chong toan tu
struct sophuc{
	int a,b; //a + bj
	//kieu_tra_ve operator(+,-,x,/,..) (danh sach tham so){
	//		code;
	//}
	//Cach1
//	sophuc operator + ( sophuc ok){
//		sophuc tong;
//		tong.a = a + ok.a;
//		tong.b = b + ok.b;
//		return tong;
//	}
	//Tuong tu voi toan tu khac nhu tru, nhan , chia 2 so phuc
	
	//Cach 2
	friend sophuc operator + (sophuc x, sophuc y){
		sophuc tong;
		tong.a = x.a + y.a;
		tong.b = x.b + y.b;
		return tong;
	}
	
	
	//Nap chong cin >>(insertion) ,cout <<(extraction)
	//insertion >>
	friend istream& operator >> (istream& in, sophuc &x){
		in >> x.a >> x.b;
		return in;
	}
	
	//extraction <<
	friend ostream& operator << (ostream& out, sophuc x){
		out << x.a << " " << x.b;
		return out;
	}
	
	//Toan tu == co the lam nhu cach1 hoac:
//	bool operator == (sophuc other){
//		return a == other.a && b == other.b;
//	}
	//hoac
//	friend bool operator == (sophuc x, sophuc y){
//		return x.a == y.a && x.b == y.b;
//	}

	//Nap chong toan tu so sanh( <, > )
	friend bool operator < (sophuc x, sophuc y){
		return (x.a*x.a + x.b*x.b < y.a*y.a + y.b*y.b);
	}
};	
	


struct sv{
	string msv, ten;
	double gpa;
	bool operator < (sv other){
		return gpa < other.gpa; //sap xep theo diem gpa
	}
};

struct time {
	int gio, phut, giay;
};
struct ve{
	string ten;
	time tg;
	
};
int main(){
	//Chu y truoc getline() phai co cin.ignore()
//	SinhVien x;
//	cin >> x.msv;
//	cin.ignore();
//	getline(cin, x.ten);
//	cin >> x.gpa;
//	cin.ignore();
//	getline(cin, x.dc);
//	cout << x.msv << " " << x.ten << " " << fixed << setprecision(2) << x.gpa << " " << x.dc << endl;
	
	//Co the khai bao sinh vien luon va cout luon
	//SinhVien x{"abcd", "nguyen van nam", 2.17, "Hai Duong"};
	//cout << x.msv << " " << x.ten << fixed << setprecision(2) << x.gpa << " " << x.dc << endl;
	
	//Goi ham in trong struct luon
//	SinhVien x;
//	x.nhap();
//	x.in();
	
	//Gan sinh vien nay cho sinh vien kia
//	SinhVien x{"abcd", "nguyen van nam", 2.17, "Hai Duong"};
//	SinhVien y = x;
//	y.in();


//Constructor
	//Goi constructor ko co tham so
//	SinhVien x;
//	x.in();
//	SinhVien y;
//	y.in();
//	//Goi constructor co tham so
//	SinhVien z("B21DCDT239", "Tran Quang Tung", 3.0, "Thanh Hoa");
//	z.in();

//	sophuc a{1, 2},b{3, 4};
//	sophuc c = a + b;
//	cout << c.a << " " << c.b << endl; //4 6

//nap chong cin,cout
//	sophuc a, b;
//	cin >> a >> b;
//	sophuc c = a + b;
//	cout << c << endl;

//toan tu ==
//	sophuc a,b;
//	cin >> a >> b;
//	if(a < b)
//		cout << "YES\n";
//	else cout << "NO";

	
//	int n; cin >> n;
//	//mang cau truc
//	//sap xep tang dan theo gpa
//	sv ds[n];
//	for(int i = 0 ; i < n ; i++){
//		cin >> ds[i].msv;
//		cin.ignore();
//		getline(cin , ds[i].ten);
//		cin >> ds[i].gpa;
//	}
//	sort(ds,ds+n);
//	for(sv x : ds){
//		cout << x.msv << " " << x.ten << " " << x.gpa << endl;
//	}


//struct long nhau
	ve a;
	getline(a.ten);
	cin >> a.tg.gio >> a.tg.phut >> a.tg.giay;
	return 0;
}
