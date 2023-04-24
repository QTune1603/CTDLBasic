#include<bits/stdc++.h>
#include<queue>
using namespace std;

//Cach thuc hoat dong: FIFO (first in first out) : queue
/*
Cac ham trong hang doi O(1)
//push: day 1 ptu vao cuoi hang doi
//pop : xoa 1 ptu o dau hang doi
//empty : check xem hang doi co rong hay ko
//size : lay ra kich thuoc cua hang doi
//front : lay ra ptu o dau hang doi
//back : Lay ra ptu o cuoi hang doi

*/
vector<string> res;
//sinh ra cac so nhi phan tu 1 den 10000
void init(){
	queue<string> q;
	q.push("1");
	res.push_back("1");
	while(res.size() < 10000){
		//lay ra ptu dau hang doi
		string top = q.front();
		q.pop();
		res.push_back(top + "0");
		res.push_back(top + "1");
		q.push(top + "0");
		q.push(top + "1"); 
	}
}

//sinh ra cac boi chi chua so 0 va 9 cua cac so tu 1 den 100
vector<long long> res2;
long long ans[101];
void init2(){
	queue<string> q;
	q.push("9");
	res2.push_back(9);
	while(1){
		string top = q.front(); 
		q.pop();
		if(top.length() == 12) break;
		res2.push_back(stoll(top + "0")); //chuyen chu thanh so
		res2.push_back(stoll(top + "9"));
		q.push(top + "0");
		q.push(top + "9");
	}
	//sinh ra cac boi cua cac so tu 1 den 100
	int cnt = 0;
	for(int i = 1 ; i <= 100 ; i++){
		for(long long x:res2){
			if(x % i == 0){
				ans[i] = x;
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
}

//sinh so loc phat
vector<string> res3;
void init3(){
	queue<string> q;
	q.push("6");
	q.push("8");
	res3.push_back("6");
	res3.push_back("8");
	while(1){
		string top = q.front();
		q.pop();
		if(top.length() == 15) break;
		res3.push_back(top + "6");
		res3.push_back(top + "8");
		q.push(top + "6");
		q.push(top + "8");
	}
}

int main(){
//	queue<int> q; //string,char,...
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	cout << q.front() << endl; //1
//	q.pop();
//	cout << q.front() << endl; //2
//	cout << q.size() << endl; //3
//	q.pop();
//	q.pop();
//	q.pop();
//	cout << q.empty() << endl; //1(true) neu rong va 0(false) neu ko rong
	
	//in ra tat ca cac so nhi phan tu 1 den n
//	init();
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		for(int i = 0 ; i < n ; i++){
//			cout << res[i] << " ";
//		}
//		cout << endl;
//	}
	
	//boi so chi chua so 0 va so 9 cua 1 so nguyen
	//init2();
//	for(int i = 1 ; i <= 100 ; i++){
//		cout << i << " " << ans[i] << endl;
//	}
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		cout << ans[n] << endl;
//	}	

	//sinh so loc phat chi chua so 6 va 8
	init3(); 
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<string> tmp;
		for(string x:res3){
			if(x.length() == n+1) break;
			tmp.push_back(x);
		}
		reverse(tmp.begin(), tmp.end());
		for(string x:tmp){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}