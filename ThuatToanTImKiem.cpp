#include<bits/stdc++.h>
using namespace std;

//Linear_Search O(n)

bool ls(int a[], int n, int x){
	for(int i = 0 ; i < n ; i++){
		if(a[i] == x)
			return true;
	}
	return false;
}

//Binary search O(logn)
//Dk: cac ptu trong mang phai dc sap xep tang dan/giam dan
bool bs(int a[] , int n, int x){
	int l = 0 , r = n-1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			return true;
		}
		//mid nho hon x thi phai tim o ben phai
		else if(a[m] < x){
			l = m + 1;
		}
		//mid lon hon x , tim ben trai
		else r = m - 1;
	}
	return false;
}
//bool binary_search(int a[] , int l, int r,  int x){
//	if(l > r)
//		return false;
//	int m = (l+r)/2;
//	if(a[m] == x)
//	 	return true;
//	else if(a[m] < x)
//		return binary_search(a,m+1,r,x);
//	else 
//		return binary_search(a, l, m-1, x);
//}



//Bai toan: Tim vi tri dau tien cua 1 ptu x trong mang da sap xep
//10 3
//1 2 2 3 3 3 3 7 8 9
int first_pos(int a[], int n, int x){
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			//tim them o ben trai
			r = m - 1;
		}
		else if(a[m] < x) l = m + 1;
		else r = m - 1;
	}
	return res;
} 
//tim vi tri cuoi cung
int last_pos(int a[], int n, int x){
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			//tim them o ben phai
			l = m + 1;
		}
		else if(a[m] < x) l = m + 1;
		else r = m - 1;
	}
	return res;
}


//binary_search(a + x, a + y, key) ==> tim kiem key trong doan  a[x] --> a[y-1] 
//binary_search trong vector
//binary_search(v.begin(), v.end(), key) : duyet trong ca vector
//Binary_search(v.begin() + x, v.begin() + y, key) : duyet trong 1  doan vector tu v[x]  --> v[y-1]


//Tim vi tri dau tien cua 1 ptu > x trong 1 mang da sap xep
//Tim vi tri dau tien cua 1 ptu < x trong 1 mang da sap xep
//Tim vi tri cuoi cung cua 1 ptu > x trong 1 mang da sap xep
//Tim vi tri cuoi cung cua 1 ptu < x trong 1 mang da sap xep
//lower_bound(iter1, iter2, key) ==> duyet trong [iter1, iter2) => Tra ve vi tri cua ptu dau tien >= key
//upper_bound(iter1, iter2, key) [iter1, iter2) ==> tra ve vi tri dau tien cua ptu > key

int main(){
//	int n,x;
//	cin >> n >> x;
//	int a[n];
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i];
//	}
	//if(bs(a,n,x)
	//if(ls(a,n,x))
//	if(binary_search(a, 0, n - 1 , x)) 
//		cout << "Found!\n";
//	else 
//		cout << "Not Found!\n";
	
	//Thuat toan binary_search da co san trong thu vien
//	if(binary_search(a,a+n,x))
//		cout << "Found\n";
//	else 
//		cout << "Not Found\n";


//tim kiem trong vector
//	int n,x;
//	cin >> n >> x;
//	vector<int> v(n);
//	for(int i = 0 ; i < n ; i++){
//		cin >> v[i];
//	} 
//	if(binary_search(v.begin(), v.end() , x))
//		cout << "Found\n";
//	if(binary_search(v.begin(), v.begin() + 4 , x)) 
//		cout << "Found!\n";
//	else 
//		cout << "Not Found\n";
//	//Duyet tu v[0] den v[4-1]
	

//	int n,x;
//	cin >> n >> x;
//	int a[n];
//	for(int &x : a) cin >> x;
//	//input:10 3
//	//1 2 2 3 3 3 3 7 8 9
//	//output 3 6
//	//cout << first_pos(a,n,x) << " " << last_pos(a,n,x);
//	//Dem so lan ptu xuat hien trong mang da sx
//	int l = first_pos(a, n, x);
//	int r = last_pos(a, n, x);
//	if(l != -1){
//		cout << r-l+1 << endl;
//	}
//	else cout << "0\n";


//lower_bound(ap ung cho mang,vector,set,map da dc sap xep)
//Neu tat ca cac ptu trong mang deu nho hon key => tra ve iter2
//	int n, x; cin >> n >> x;
//	int a[n];
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i];
//	}
//	//input 7 2
//	//1 2 2 3 4 5 6
//	//out put 2(gtri)
//	// 1(chi so)
//	//luu gtri cua lower_bound bang auto cho ez
//	auto it = lower_bound(a, a + n, x);//tim vi tri dau tien cua ptu >= x trong mang a
//	cout << *it << endl; //gia tri ptu dau tien >= x
//	cout << it - a << endl; // chi so cua ptu (neu co x trong mang thi in ra chi so cua x, neu ko ton tai x thi in ra chi so cua ptu >= x ) 
//	if(it == (a+n))
//		cout << "Khong co phan tu nao trong mang >= " << x << endl; 
//	return 0;
	
	//tuong tu voi vector
//	int n,x; cin >> n >> x;
//	vector<int> v(n);
//	for(int i = 0 ; i < n ; i++){
//		cin >> v[i];
//	}
//	auto it = lower_bound(v.begin(), v.end(), x);
//	if(it == v.end())
//		cout << "Khong tim thay phan tu nao trong mang >=" << x << endl;



//upper_bound
//Neu tat ca cac ptu trong mang deu <= key ==> tra ve iter2
	int n,x; cin >> n >> x;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	auto it = upper_bound(a.begin(), a.end(),x);
	cout << "Gia tri phan tu dau tien lon hon " << x << " la: " << *it << endl;
	cout << "chi so ptu  dau tien lon hon " << x << " la: " << it - a.begin() << endl;
	cout << distance(a.begin(), it) << endl; //khoang cach tu vi tri bat dau den vi tri it(chi so cua it - chi so 0 == chi so it)
	if(it == a.end())
		cout << "Khong co ptu nao > " << x << endl;
 	return 0;
} 
