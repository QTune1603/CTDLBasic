#include<bits/stdc++.h>
using namespace std;


/*n cang nho thi co the dung do phuc tap lon
  n cang lon thi can phai co do phuc tap nho
  Mot so do phuc tap khuyen dung cho tung gioi han cua n:
       n <= 10 : O(n!), O(n^7),O(n^6)
       n <= 20 : O(2^n*n),O(n^5)
       n <= 80 : O(n^4)
       n <= 400 : O(n^3)
       n <= 7500 : O(n^2)
       n <= 7 * 10^4 : O(n* can n)
       n <= 5 * 10^5 : O(n * logn)
       n <= 5 * 10 ^6 : O(n)
       n <= 10^18 : O(log^2n), O(logn), O(1);
*/
//Lap can bac 2 cua n ta coi do phuc tap la O(logn)
bool nt(int n){
	for(int i = 2 ; i <= sqrt(n) ; ++i){
		if(n % i == 0) return false;
	}
	return n > 1;
}

bool nt2(int n){
	for(int i = 2 ; i < n ; ++i){
		if(n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int a = 10 ; //O(1)
	int b = b + 10; //O(1)
	int n ; cin >> n; //O(1)
	
	// vi lap n lan nen do phuc tap la O(n) * O(1) = O(n)
	for(int i = 1 ; i <= n ; ++i){
		cout << i << endl;  //do phuc tap O(1)=1
	}
	
	//Day van la do phuc tap O(n)
	for(int i = 1 ; i <= 5 * n + 45673 ; ++i){
		cout << i << endl;
	}
	//do phuc tap luc nay la O(n*logn)
	for(int i = 1 ; i <= n ; ++i){
		if(nt(i)){
			cout << i << endl;
		}
	}
	
	//do phuc tap O(n*n) => O(n^2)
	for(int i = 1 ; i <= n ; ++i){
		if(nt2(i))
			cout << i << endl;
	}
	
	int m;
	//Luc nay do phuc tap se la O(n*m) => O(n^2)
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			//do phuc tap hang so O(1)
		}
	}
	
	
	//Do phuc tap la: O(n*m*logn)
	int cnt = 0;
	for(int i = 1 ; i <= 5 ; ++i){
		for(int j = 1 ; j <= 10 ; ++j){
			if(nt(cnt)) cout << cnt << endl;
		}
	}
	
	//Truong hop do phuc tap la O(n^2 + n + n^3 + n^2 * logn) thi do phuc tap se lay bac cao nhat
	// ===> O(n^3)
	
	//Truong hop O(n^2 + n^2) thi do phuc tap van la O(n^2)
	
	//cac bai tap gioi han time la 10^6 ==> chay 1s
}
