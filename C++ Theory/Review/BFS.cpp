#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

// 10 11
// 1 2
// 1 3
// 1 5
// 1 10
// 2 4
// 3 6
// 3 7
// 3 9
// 6 7
// 5 8
// 8 9

int n, m;
vector<int> adj[1001];
bool visited[1001];

void inp() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        // Đồ thị không hướng
        adj[x].push_back(y);
        adj[y].push_back(x);

        // Đồ thị có hướng
        // adj[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
}

void bfs(int u) {
    // Bước 1: Khởi tạo
    queue<int> q; // Tạo hàng đợi rỗng
    q.push(u); // Đẩy đỉnh u vào hàng đợi
    visited[u] = true; // Đánh dấu là đỉnh u đã được thăm

    // Bước 2: Lặp khi mà hàng đợi vẫn còn phần tử
    while (!q.empty()) { // Lặp tới khi queue khác rỗng
        int v = q.front(); // Lấy ra đỉnh ở đầu hàng đợi
        q.pop(); // Xóa đỉnh khỏi đầu hàng đợi
        cout << v << " "; // Thăm đỉnh v
        for(int x : adj[v]) { // Duyệt các đỉnh kề với v mà chưa được thăm và đẩy vào hàng đợi
            if(!visited[x]) { // Nếu x chưa được thăm
                q.push(x);
                visited[x] = true;
            }
        }

    } 
}

int main() {
    inp();
    bfs(1);
    return 0;
}