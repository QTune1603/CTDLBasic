#include<bits/stdc++.h>
using namespace std;

//Chu y:
//Kieu tra ve, danh sach tham so
//Thu tu va kieu du lieu cua danh sach tham so la quan trong
//Muon thay doi gia tri cua doi so sau khi ham ket thuc ==> truyen tham chieu


//Khai báo nguyên mãu  
bool nt(int);
bool check(int n);
int min(int ,int ); 
//Nhu này se không bi loi khi viet hàm không theo thu tu 

int min(int a ,int b){
	if(a < b){
		return a; 
	} 
	else return b; 
} 
void xinchao(int a,int b,int c){
	cout << a* b * c << endl;
}

void tang2(int n){
	n += 100;
}

int tong1(int n){
	return n * (n + 1) / 2;
}


float tong2(int n){
	float res = 0;
	for(int i = 1 ; i <- n ; ++i){
		res += 1.0 / i;
	}
	return res;
}


int tong3(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
bool nt(int n){
	for(int i = 2 ; i <= sqrt(n) ; ++i){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}

bool check(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	if(nt(sum)) return true;
	else return false;
}
// Can khai báo hàm nt truoc hàm check neu không se bi loi 
//Hoac có the khai báo nguyên mau truoc  


int tang(int &n){
	++n; 
} 

//Function overLoading(Nap chong ham)
//Ham cung ten nhung khac kieu du lieu
int tong(int a, int b){
	return a + b;
}

float tong(float a, float b){
	return a + b;
} 

long long tong(long long a, long long b){
	return a + b;
}
int main()
{
//	float n = 100.2 , m = 200.4 , l = 300.3; // ko float dc
//	xinchao(n,m,l);
//	int a = 1000;
//	tang(a);
//	cout << a << endl; // ko thay doi
//	int a = 10;
//	int S = tong(a);
//	cout << S << endl; //55

//	for(int i = 1 ; i <= 100 ; ++i){
//		if(nt(i)){  // = if(nt(i) == true)
//			cout << i << " " ;
//		}
//	}
//	int n = 124;
//	if(check(n)) cout << 1;
//	else cout << 0;
////	if(nt(tong3(n))){
////		cout << 1 ;
////	}
////	else cout << 0;
//	int sum = tong(n);
//	if(nt(sum)){
//		cout << 1 ;
//	}
//	else cout << 0;
//	int a = 124;
//	tang(a);//Neu khog truyen tham chieu thi k doi
//	cout << a ;
	
//	int n = 100, m = 200;
//	cout << tong(n,m) ;
	float n = 100.2, m = 200.3;
	cout << tong(n,m);
	return 0;
}
