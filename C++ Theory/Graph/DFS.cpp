#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

// Input
// 9 9
// 1 2 
// 1 3
// 1 5
// 2 4
// 3 6
// 3 7
// 3 9
// 5 8
// 8 9

int n, m;
vector<int> adj[1001];
bool visited[1001];

void inp(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        // Đồ thị vô hướng
        adj[x].push_back(y);
        adj[y].push_back(x);

        // Đồ thị có hướng
        // adj[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
}

void DFS(int u) {
    // Thăm đỉnh u
    cout << u << " ";
    // Đánh dấu là u đã được thăm
    visited[u] = true;
    // Duyệt các đỉnh kề với đỉnh u
    for (int v : adj[u]) {
        // Nếu đỉnh v chưa được thăm
        if(!visited[v]) {
            DFS(v);
        }
    }
}

int main(){
    inp();
    DFS(1);
}

// Output: 
// 1 2 4 3 6 7 9 8 5