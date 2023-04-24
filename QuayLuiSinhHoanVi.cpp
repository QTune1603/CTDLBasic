#include<bits/stdc++.h>
using namespace std;

//backtrack( tu tuong giong de quy)

int n,k,x[100], used[100];

void inkq(){
	for(int i = 1 ; i <= n ; i++){
		cout << x[i];
	}
	cout << endl;
}

void Try(int i){
	//duyet cac kha nang co the nhan dc cua x[i]
	for(int j = 1 ; j <= n ; j++){
		//check xem x[i] = j dc ko
		if(used[j] == 0){
			//hoan vi ko dc co 2 ptu giong nhau
			used[j] = 1;
			x[i] = j;
			if(i == n) {
				inkq();
			}
			else {
				Try(i+1);
			}
			//backtrack
			used[j] = 0;
		}
	}
}

int main(){
	cin >> n;
	memset(used, 0, sizeof(used));
	Try(1);
}