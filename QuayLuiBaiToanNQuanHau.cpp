#include<bits/stdc++.h>
using namespace std;

//backtrack( tu tuong giong de quy)
/* 
	Tim cach sap xep n quan hau vao n hang tren ban co vua
	sao cho khong co 2 quan hau nao an nhau
*/
int n,x[100],cot[100], cheoxuoi[100], cheonguoc[100], dem;
int a[100][100];

void inkq(){
	memset(a, 0, sizeof(a));
	for(int i = 1 ; i <= n ; i++){
		a[i][x[i]] = 1;
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void Try(int i){
	//duyet cac kha nang co the nhan dc cua x[i]
	for(int j = 1 ; j <= n ; j++){
		if(cot[j] == 1 && cheoxuoi[i-j+n] == 1 && cheonguoc[i+j-1] == 1){
			cot[j] = cheoxuoi[i-j+n] = cheonguoc[i+j-1] = 0;
			x[i] = j;
			if(i == n){
				//inkq();
				dem++;
			}
			else {
				Try(i+1);
			}
			//backtrack
			cot[j] = cheoxuoi[i-j+n] = cheonguoc[i+j-1] = 1;
		}
	}
}

int main(){
	cin >> n ;
	for(int i = 1 ; i <= 99 ; i++){
		cot[i] = cheoxuoi[i] = cheonguoc[i] = 1;
	}
	Try(1);
	//dem so cach dat n quan hau
	cout << dem;
}