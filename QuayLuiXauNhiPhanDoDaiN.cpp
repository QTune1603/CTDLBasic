#include<bits/stdc++.h>
using namespace std;

//backtrack( tu tuong giong de quy)

int n,x[100];

void inkq(){
	for(int i = 1 ; i <= n ; i++){
		cout << x[i];
	}
	cout << endl;
}

void Try(int i){
	//duyet cac kha nang ma x[i] co the nhan dc do la 0 va 1
	for(int j = 0 ; j <= 1 ; j++){
		x[i] = j;
		if(i == n){
			inkq();
		}
		else {
			Try(i+1);
		}
	}
}

int main(){
	cin >> n;
	Try(1); // i = 1
}