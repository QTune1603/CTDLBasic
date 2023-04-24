#include<bits/stdc++.h>
#include<deque>
using namespace std;

//stack:LIFO
//queue: FIFO
//deque; double end queue

//cac ham trong deque
//size(): lay ra kich thuoc
// push_front(): day vao dau 1 ptu
// push_back(): day vao cuoi 1 ptu
// pop_front(): xoa 1 ptu o dau
// pop_back(): xoa 1 ptu o cuoi
// empty():check xem co rong ko
// front(): lay ra ptu o dau
// back(): lay ra ptu o cuoi

int main(){
	deque<int> q;
	q.push_front(2);
	q.push_back(3);
	q.push_back(4);
	q.push_back(5);
	q.push_front(1);
	cout << q.front() << endl;
	cout << q.back() << endl;
	cout << q.size() << endl;
	cout << q.empty() << endl;
}