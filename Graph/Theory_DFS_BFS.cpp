#include<bits/stdc++.h>
using namespace std;
using ll = long long;

/*
!    Đồ thị:
*    1 - 2
*    | \
*    3  4
*/
int n, a[1005][1005]; // Ma trận kề
/*
!    Ma trận kề:
*       1 2 3 4
*    1 [0 1 1 1]
*    2 [1 0 0 0]
*    3 [1 0 0 0]
*    4 [1 0 0 0]
*/
vector<pair<int, int>> b; // Danh sách cạnh
/*
*    [(1, 2), (1, 3), (1, 4)]
*/
vector<int> c[1005]; // Danh sách kề được dùng nhiều nhất
/*
!    Danh sách kề:
*    1: [2, 3, 4]
*    2: [1]
*    3: [1]
*    4: [1]
*/
bool visited[1005];

//! Ma trận kề
void DFS1(int u) { 
    cout << u <<  " ";
    visited[u] = true;
    // Duyệt ds kề của đỉnh u: duyệt cái dòng thứ u trong ma trận kề 
    for(int i = 1; i <= n; ++i){
        if(a[u][i] == 1){
            if(!visited[i]){
                DFS1(i);
            }
        }
    }
}

//! Danh sách cạnh
void DFS2(int u) {
    cout << u << " ";
    visited[u] = true;
    // Duyệt ds kề của đỉnh u
    for(auto it : b){
        if(it.first == u){
            if(!visited[it.second]){
                DFS2(it.second);
            }
        }
        if(it.second == u){
            if(!visited[it.first]){
                DFS2(it.first);
            }
        }
    }
}

//! Danh sách kề
void DFS3(int u) {
    cout << u << " ";
    visited[u] = true;
    // Duyệt ds kề của đỉnh u
    for(int v : c[u]){
        if(!visited[v]){
            DFS3(v);
        }
    }
}

//! Danh sách kề
void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()) {
        u = q.front(); q.pop();
        cout << u << ' ';
        for(int v : c[u]) {
            if(!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}