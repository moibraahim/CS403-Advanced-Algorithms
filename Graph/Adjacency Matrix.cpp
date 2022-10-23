#include<iostream>
using namespace std;


int Adj[20][20] = { 0 };

void PrintAdj(int Nodes) {
    int i, j;
    for (i = 0; i < Nodes; i++) {
        for (j = 0; j < Nodes; j++) 
        {
            cout << Adj[i][j] << " ";
        }
        cout << endl;
    }
}
void add_edge(int u, int v) {       
    Adj[u][v] = 1;
    Adj[v][u] = 1;
}
int main() {
    int Nodes = 6;    //there are 6 nodes in the graph
    add_edge(0, 4);
    add_edge(0, 3);
    add_edge(1, 2);
    add_edge(1, 4);
    add_edge(1, 5);
    add_edge(2, 3);
    add_edge(2, 5);
    add_edge(5, 3);
    add_edge(5, 4);
    PrintAdj(Nodes);
}