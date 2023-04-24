#include<bits/stdc++.h>
using namespace std;

//backtrack( tu tuong giong de quy)

int n,k,x[100];

void inkq(){
	for(int i = 1 ; i <= k ; i++){
		cout << x[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = n-k+i ; j >= x[i-1] + 1 ; j--){
		x[i] = j;
		if(i == k){
			inkq();
		}
		else {
			Try(i+1);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
	}
}