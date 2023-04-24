#include<bits/stdc++.h>
using namespace std;

int main(){
	
//Dem cac ptu khac nhau trong mang
//	int t; cin >> t;
//	while(t--){
//		//su dung set
//		int n; cin >> n;
//		set<int> se;
//		for(int i = 0 ; i < n ; i++){
//			int x; cin >> x;
//			se.insert(x);
//		}
//		cout << se.size()  << endl;
		//su dung map
//		map<int,int> mp; //mp<int,bool> mp;
//		for(int i = 0 ; i < n ; i++){
//			int x ; cin >> x;
//			mp[x] = true;
//		}
//		cout << mp.size() << endl;
		//su dung sap xep
//		int a[n];
//		for(int &x:a) cin >> x;
//		sort(a,a+n);
//		int ans = 1;
//		for(int i = 1 ; i < n ; i++){
//			if(a[i] != a[i-1]) ++ans;
//		}
//		cout << ans <<endl;
	
	
	
//kiem tra xem ptu co nam trong mang ko
//	int t; cin >> t;
//	while(t--){
		//tim kiem nhi phan
		//int n; cin >> n;
//		int a[n];
//		for(int &x : a) cin >> x;
//		sort(a,a+n);
//		int q; cin >> q;
//		while(q--){
//			int x; cin >> x;
//			if(binary_search(a,a+n,x)){
//				cout << "YES\n";
//			}	
//			else cout << "NO\n";
//		}

		//su dung set
//		set<int> se;
//		for(int i = 0 ; i < n ; i++){
//			int x; cin >> x;
//			se.insert(x);
//		}
//		int q; cin >> q;
//		while(q--){
//			int x; cin >> x;
//			if(se.count(x)){
//				cout << "YES\n";
//			}
//			else cout << "NO\n";
//		}
		
		//su dung map
//		map<int,int> mp; //map<int,bool> mp;
//		for(int i = 0 ; i < n ; i++){
//			int x; cin >> x;
//			mp[x] = true;
//		}
//		int q; cin >> q;
//		while(q--){
//			int x; cin >> x;
//			if(mp.count(x)){
//				cout << "YES\n";
//			}
//			else cout << "NO\n";
//		}


//Dem cac ptu thuoc mang thu1 ma ko thuoc mang thu2
//	int t; cin >> t;
//	while(t--){
		//su dung set
//		int n, m; cin >> n >> m;
//		int a[n];
//		for(int &x : a) cin >> x;
//		set<int> se;
//		for(int i = 0 ; i < m ; i++){
//			int x; cin >> x;
//			se.insert(x);
//		}
//		int flag = 0;
//		for(int x : a){
//			if(se.count(x) == 0){
//				cout << x << " ";
//				flag = 1;
//			}
//		}
//		if(flag == 0) cout << "NOT FOUND\n";
//		else cout << endl;

		//su dung map
//		int n, m; cin >> n >> m;
//		int a[n];
//		for(int &x : a) cin >> x;
//		map<int,int> mp;
//		for(int i = 0 ; i < m ; i++){
//			int x ; cin >> x;
//			mp[x] = true;
//		}
//		int flag = 0;
//		for(int x : a){
//			if(mp.count(x) == 0){
//				cout << x << " ";
//				flag = 1;
//			}
//		}
//		if(flag == 0) cout << "NOT FOUND\n";
//		else cout << endl;
//	}

//Tim so xuat hien nhieu lan nhat trong mang
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		map<long long,long long> mp;
//		for(int i = 0 ; i < n ; i++){
//			long long x; cin >> x;
//			mp[x]++;
//		}
//		long long res,fre = 0;
//		for(auto it : mp){
//			if(it.second > fre){
//				fre = it.second;
//				res = it.first;
//			}
//		}
//		cout << res << " " << fre << endl;
//	}


//Tim ki tu xuat hien nhieu nhat trong chuoi
//mang danh dau
//	int t; cin >> t;
//	cin.ignore();
//	while(t--){
//		string s;
//		getline(cin,s);
//		char a[256] = {0};
//		for(auto x : s){
//			a[x]++;
//		}
//		char res,fre = 0;
//		for(int i = 0 ; i < 256 ; i++){
//			if(a[i] > fre){
//				fre = a[i];
//				res = (char)(i);
//			}
//		}
//		cout << (char)(res) << endl;
		
		//map
//		map<char,int> mp;
//		for(char x:s){
//			mp[x]++;
//		}
//		char res,fre = 0;
//		for(auto x : mp){
//			if(x.second > fre){
//				fre = x.second;
//				res = x.first;
//			}
//		}
//		cout << res << endl;
//	}

//Xau pangram
//	int t; cin >> t;
//	cin.ignore();
//	while(t--){
		//su dung set
//		string s;
//		getline(cin,s);
//		set<char> se;
//		for(auto x:s){
//			se.insert(tolower(x));
//		}
//		cout << se.size() << endl;
//		if(se.size() == 26) cout << "YES\n";
//		else cout << "NO\n";
		
		//dung map
//		map<char,int> mp;
//		for(auto x : s){
//			mp[tolower(x)] = true;
//		}
//		if(mp.size() == 26) cout << "YES\n";
//		else cout << "NO\n";

		//dung mang danh dau
//		int a[26] = {0};
//		for(char x : s){
//			a[tolower(x) - 'a'] = 1;
//		}
//		int cnt = 0;
//		for(int i = 0 ; i < 26 ; i++){
//			cnt += a[i];
//		}
//		if(cnt == 26) cout << "YES\n";
//		else cout <<"NO\n";
//	}



//Dem so luong cac tu trong xau
//	int t; cin >> t;
//	cin.ignore();
//	while(t--){
//		string s;
//		getline(cin, s);
//		set<string> se;
//		stringstream ss(s); //dung de cach cac tu ra 
//		string tmp; //luu cac tu tach dc
//		while(ss >> tmp){ //luu cac tu tach dc vao set
//			se.insert(tmp);
//		}
//		cout << se.size() << endl;
//	}
		//map
//		string s;
//		getline(cin, s);
//		map<string, int> mp;
//		stringstream ss(s);
//		string word;
//		while(ss >> word){
//			mp[word] = true;
//		}
//		cout << mp.size() << endl;


//tim tu co so lan xuat hien nhieu nhat trong xau
//	int t; cin >> t;
//	cin.ignore();
//	while(t--){
//		string s;
//		map<string,int> mp;
//		getline(cin, s);
//		stringstream ss(s);
//		string tmp;
//		string res; int fre = 0;
//		while(ss >> tmp){
//			mp[tmp]++;
//		}
//		for(auto x : mp){
//			if(x.second > fre){
//				fre = x.second;
//				res = x.first;
//			}
//		}
//		cout << res << endl;
//	}


//Tim tu lap lai dau tien trong xau
//	int t; cin >> t;
//	cin.ignore();
//	while(t--){
//		string s;
//		getline(cin , s);
//		set<string> se;
//		stringstream ss(s);//tach cac tu ra tu s
//		vector<string> v;
//		string tmp;
//		while(ss >> tmp){
//			v.push_back(tmp); //cho vao vector
//		}
//		for(auto x : v){ //duyet trong vector
//			if(se.find(x) != se.end()){ //tim thay x da bi lap lai( neu == thi ko tim thay)
//				cout << x << endl;
//				break;
//			}
//			se.insert(x);
//		}
//	}


//Dat ten nguoi dung
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	cin.ignore();
	map<string,int> mp;
	while(t--){
		string s;
		getline(cin, s);
		if(mp.find(s) == mp.end()){
			cout << s << endl;
		}
		else {
			cout << s << mp[s] << endl;
		}
		mp[s]++;
	}
}

