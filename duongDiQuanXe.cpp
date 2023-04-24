#include<bits/stdc++.h>
using namespace std;
#define ll long long
// bai quan xe
const int mod = 1e9 + 7, maxN = 2e1 + 1;
int dx[4] = {0, -1, 1, 0};
int dy[4] = {-1, 0, 0, 1};
int a[maxN][maxN], n, s, t, cnt;
void bfs(int i, int j){
    cnt++;
    a[i][j] = 1;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 0){
            bfs(i1, j1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    bfs(s, t);
    cout << cnt;
 
    return 0;
}