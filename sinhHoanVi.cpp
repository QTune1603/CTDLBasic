#include <bits/stdc++.h>
using namespace std;

//sinh hoan vi co do dai n
/*
	n = 4;
	1 2 3 4
	1 2 4 3
	...
==> co thu tu

//cau hinh dau tien: 123...n
//cau hinh cuoi cung: n..321

//sinh cau hinh tiep theo la sinh ra so nho nhat > so hien tai
vd: 123897654
	==> 123945678

//phai t?m vi tri a[i] < a[i+1]
//tim ra trong doan a[i+1] => a[n] so nho nhat > vi tri o dk tren

*/

int n, a[100], ok;


//tu code
void ktao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n-1;
	//khi nao a[i] > a[i+1] thi bo qua va lap tiep
	while(i >= 1 && a[i] > a[i+1]){
		--i;
	}
	if(i == 0){ //cau hinh cuoi cung
		ok = 0;
	}
	else {
		//di tim vi tri > a[i] nho nhat trong doan [i+1,n]
		int j = n;
		while(a[i] > a[j]){
			--j;
		}
		swap(a[i], a[j]);
//ki thuat 2 con tro
//		int l = i+1, r = n;
//		while(l < r){
//			swap(a[l], a[r]);
//			++l;
//			--r;
//		}

//ham lat nguoc 
		reverse(a+i+1, a+n+1);
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

	//co the tu code nhu nay
//    cin >> n;
//    ok = 1;
//    ktao();
//    while(ok){
//    	for(int i = 1; i <= n ; i++){
//    		cout << a[i];
//		}
//		cout << endl;
//		sinh();
//	}
	
	//hoac co the dung ham sinh hoan vi trong c++
	//next_permutation(a,a+n): tra ve false neu la cau hinh cuoi cung 
	//sinh ra hoan vi dang truoc
	//prev_nextpermutation(a,a+n)
	int v; cin >> v;
	int x[v];
	//khoi tao sinh hoan vi ke tiep
//	for(int i = 0 ; i < v ; i++) {
//		x[i] = i+1; //12345
//	}

	//khoi tao sinh hoan vi truoc do
	for(int i = 0 ; i < v ; i++){
		x[i] = v-i; //54321
	}
	do{
		for(int i = 0 ; i < v ; i++){
			cout << x[i];
		}
		cout << endl;
	}while(prev_permutation(x,x+v));
	
	//hai ham nay co the dung cho string
	string s = "abcdef"; //abcdfe
	next_permutation(s.begin(), s.end());
	cout << s << endl;
	
}