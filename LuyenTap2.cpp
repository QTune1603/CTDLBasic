#include<bits/stdc++.h>
using namespace std;

int main()
{
	//in ra max,min cua 3 so nhap vao
//	int a,b,c;
//	cin >> a >> b >> c;
//	int min,max;
//	if(a > b && a > c)
//		max = a;
//	else if(b > c && b > a)
//		max = b;
//	else 
//		max = c;
//	if(a < b && a < c)
//		min = a;
//	else if(b < a && b < c)
//		min = b;
//	else 
//		min = c;
//	cout << max << " " << min;

//ktra 3 canh tam giac 
//	int a,b,c;
//	cin >> a >> b >> c;
//	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
//		cout << "YES";
//	}
//	else 
//		cout << "NO";

//	int a,b,c;
//	cin >> a >> b >> c;
//	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
//		if(a == b && a == c && b == c)
//			cout << 1;
//		else if(a == b || a == c || b == c)
//			cout << 2;
//		else if(a * a + b * b == c * c || a * a + c * c== b * b || b * b + c * c == a * a)
//			cout << 3;
//		else if(a == b && a == c && b == c && a * a + b * b == c * c || a * a + c * c== b * b || b * b + c * c == a * a)
//			cout << 4;
//		else 
//			cout << 5;
//	}
//	else 
//		cout <<"INVALID";

//Doi ngay sang nam thang tuan  
//	int n; cin >> n;
//	int y = n / 365;
//	int w = n % 365 / 7;
//	int d = n % 365 % 7;
//	cout << y << " " << w <<" " << d;

//PT Bac 2 
//	int a,b,c;
//	cin >> a >> b >> c;
//	if(a == 0){
//		if(b == 0){
//			if(c == 0){
//				cout << "INF";
//			}
//			else {
//				cout << "NO";
//			}
//		}
//		else {
//			cout << fixed << setprecision(2) << (float)-c/b;
//		}
//	}
//	else {
//		float x1,x2;
//		int denta;
//		denta = b * b - 4 * a * c;
//		x1 = (-b + sqrt(denta))/(2*a);
//		x2 = (-b - sqrt(denta))/(2*a);
//		if(denta < 0){
//			cout << "NO";
//		}
//		else if(denta > 0){
//			cout << fixed << setprecision(2) << x1 << " " << x2;
//		}
//		else {
//			cout << fixed << setprecision(2) << (float)-b/(2*a);
//		}
//	}

//Goldbach codeforce 472A
//	int n; cin >> n;
//	if(n < 12) return 0;
//	if(n % 2 == 0) cout << 4 << " " << n - 4 ;
//	else cout << 9 << " " << n-9;

//617A codeforce
//	int n; cin >> n;
//	int cnt = 0;
//	if(n < 0) return 0;
//	if(n % 5 == 0){
//		cnt += n/5;
//	}
//	else{
//		cnt += n/5 + 1;
//	}
//	cout << cnt;

//581A codeforce
	int a,b;
	cin >> a >> b;
	if(a < 0 && b < 0){
		return 0;
	}
	int min = a , max = a;
	if(a < b){
		max = b;
	} 
	else  {
		min = b;
	}
	if(a > b){
		cout << b << " " << (max - min)/2 ;
	}
	else {
		cout << a << " " << (max - min)/2;	
	}
	return 0;
} 
