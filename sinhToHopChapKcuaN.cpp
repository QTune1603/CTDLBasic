#include <bits/stdc++.h>
using namespace std;

/*
Sinh to hop nen ko co thu tu

//1 to hop se co so dung truoc < so dung sau
//to hop dau tien se la cac so tu 1 toi k
//to hop cuoi cung se la k so lon nhat

//tong quat:
	+) cau hinh dau tien: 1,2,3,,,,k
	+) cau hinh cuoi cung: n-k+1, n-k+2, ... n-k+k
	==> max tai vi tri i la n-k+i

	n = 5, k = 3; // to hop chap 3 cua 5
	1 2 3
	1 2 4
	1 2 5
	1 3 4
	1 3 5
	1 4 5
	2 3 4
	2 3 5
	2 4 5
	3 4 5
*/

int n, k, a[100], ok;

//tao cau hinh dau tien tu 1 => k
void ktao(){
	for(int i = 1 ; i <= k ; i++){
		a[i] = i;
	}
}

void sinh(){
	//bat dau tu bit cuoi cung
	int i = k;
	//tim gtri max tai vi tri i la n-k+i
	while(i >= 1 && a[i] == n-k+i){
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else {
		a[i]++;
		for(int j = i+1 ; j <= k ; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
    ok = 1;
    ktao();
    while(ok){
    	for(int i = 1 ; i <= k ; i++){
    		cout << a[i];
		}
		cout << endl;
		sinh();
	}
}