#include<bits/stdc++.h>
using namespace std;

//sinh cac cach bieu dien n duoi dang tong cac so tu nhien nho hon hoac bang n
/*
	vd:  n=6
	6 = 6
	6 = 5+1
	6 = 4+1+1
	6 = 3+2+1
	6 = 3+1+1+1
	...
	
==> ko theo thu tu
==> tim so hang dau tien chua bang 1 va giam di 1 don vi
- cau hinh cuoi cung : 1 1 1 1 1 1...
*/

int n, a[100], ok, cnt;

void ktao(){
	cnt = 1;
	a[1] = n;
}

void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else {
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		if(q != 0){
			for(int j = 1 ; j <= q ; j++){
				++cnt;
				a[cnt] = a[i];
			}
		}
		if(r != 0){
			++cnt;
			a[cnt] = r;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	ktao();
	ok = 1;
	while(ok){
		for(int i = 1 ; i <= cnt ; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
}