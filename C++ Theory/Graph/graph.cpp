#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;

class Graph {
public:
    Graph() {
        edge = NULL;
        noVertices = 0;
        noEdges = 0;
    }
    Graph (int N) {
        noVertices = N;
        noEdges = 0;
        edge = new bool * [noVertices];
        for (int i = 0; i < noVertices; i++) {
            edge[i] = new bool[noVertices];
            for (int j = 0; j < noVertices; j++) {
                edge[i][j] = false;
            }
        }
    }
    ~Graph () {
        for (int i = 0; i < noVertices; i++) {
            delete [] edge[i];
        }
        delete [] edge;
        edge = NULL;
        noVertices = 0;
        noEdges = 0;
    }
    void randomGenerate(int N) {
        noVertices = N;
        noEdges = 0;
        edge = new bool * [noVertices];
        for (int i = 0; i < noVertices; i++) {
            edge[i] = new bool[noVertices];
        }
        for (int i = 0; i < noVertices; i++) {
            edge[i][i] = false;
            for (int j = i + 1; j < noVertices; j++) {
                edge[i][j] = (rand() % 1000) < 500;
                edge[j][i] = edge[i][j];
                noEdges += edge[i][j];
            }
        }
    }
    void printEdge() {
        for (int i = 0; i < noVertices; i++) {
            for (int j = 0; j < noVertices; j++) {
                cout << edge[i][j] << " ";
            }
            cout << endl;
        }
    }
    void printGraphToFile(char * oFile) {
        ofstream file;
        file.open(oFile);
        file << noVertices << " " << noEdges << endl;
        for (int i = 0; i < noVertices - 1; i++) {
            for (int j = i + 1; j < noVertices; j++) {
                if (edge[i][j]) {
                    file << i << " " << j << endl;
                }
            }
        }
    }

    void BFS(int startVertex) {
        if (startVertex < 0 || startVertex >= noVertices)
            return;

        vector<bool> visited(noVertices, false);
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            int currentVertex = q.front();
            q.pop();
            cout << currentVertex << " ";

            // Duyệt các đỉnh kề của đỉnh hiện tại
            for (int i = 0; i < noVertices; i++) {
                if (edge[currentVertex][i] && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }   

private:
    bool ** edge;
    int noVertices;
    int noEdges;
};

// Chuong trinh chinh
int main() {
    Graph g;
    cout << "Random Generate: " << endl;
    g.randomGenerate(5);
    g.printEdge();
    g.printGraphToFile("ThucHanh14_DoThi_Input.txt");
    cout << endl;
    g.BFS(0);

    return 0;
}