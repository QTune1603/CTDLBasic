#include<bits/stdc++.h>
using namespace std;

//sinh xau nhi phan co do dai n
/*
	chu y:
	+) 0+0 = 0
	+) 0+1 = 1+0 = 1
	+) 1 + 1 = 0, nho 1
	+) cau hinh nhi phan cuoi cung la 1111...
	
	+)sinh ra 1 cau hinh tiep theo:
	vd n = 5 : cau hinh cuoi: 10111(sinh theo thu tu tu phai sang trai)
	==> cau hinh tiep theo: 11000(1 thanh 0 va den so 0 thanh 1 thi stop va copy phan con lai xuong)
	==> cau hinh tiep: 11001(gap 0 ngay dau tien nen thanh 1 va stop va copy phan con lai)
	==> cau hinh tiep: 11010
	n = 3
	000
	001
	010
	011
	100
	101
	110
	111

Phuong phap sinh:
-ta phai biet cau hinh dau tien
-ta phai biet cau hinh cuoi cung
-phuong phap sinh

//Ma gia pp sinh
	<Ktao cau hinh dau tien>
	while(<khi chua phai cau hinh cuoi cung>){
		<in ra cau hinh hien tai>
		<sinh ra cau hinh tiep theo>
	}
*/

int n, k, a[100], ok;

//tao ra cau hinh nhi phan dau tien la n bit 0
void ktao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = 0;
	}
}

void sinh(){
	//bat dau tu bit cuoi cung va di tim bit 0 dau tien
	int i = n;
	//lap khi nao = 1 thi con lap va chan ko cho i = 0
	while(i >= 1 && a[i] == 1){
		//bien bit 1 thanh bit 0 va dich sang ben trai
		a[i] = 0;
		--i;
	}
	if(i == 0){
		//check xem phai cau hinh cuoi cung chua
		ok = 0;
	}
	else {
		a[i] = 1;
	}
}

//sinh xau nhi phan co k bit 1
bool check(){
	int cnt = 0;
	for(int i = 1 ; i <= n ; i++){
		cnt += a[i];
	}
	return cnt == k;
}

int main(){
	//cin >> n;
	cin >> n >> k;
	ok = 1;
	ktao();
	//khi chua gap cau hinh cuoi cung thi van lap
	//gap cau hinh 1111... thi ok = 0 thi dung in
	while(ok){
//		for(int i = 1 ; i <= n ; i++){
//			cout << a[i];
//		}
//		cout << endl;
//		sinh();

		if(check()){
			for(int i = 1;  i <= n ; i++){
				cout << a[i];
			}
			cout << endl;
		}
		sinh();
	}
}
