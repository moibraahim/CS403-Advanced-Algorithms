#include<iostream>
#include <vector>
#include <list>
#include<iterator>
using namespace std;



void PrintAdjList(vector<int> adjlist[], int nodes)
{

    vector<int>::iterator it;
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " ------> ";
        for (it = adjlist[i].begin(); it != adjlist[i].end(); ++it)
        {
            cout << *it << " ";
        }

        cout << endl;
       
        
    }
}


void add_edge(vector<int> adjlist[], int n1, int n2)
{
    adjlist[n1].push_back(n2);
    adjlist[n2].push_back(n1);
}




// Undirected graph representation using adjacency list
int main()
{
    //int vertex = 6; // Number of nodes
    vector<int> adjlist[6];
    add_edge(adjlist, 0, 4);
    add_edge(adjlist, 0, 3);
    add_edge(adjlist, 1, 2);
    add_edge(adjlist, 1, 4);
    add_edge(adjlist, 1, 5);
    add_edge(adjlist, 2, 3);
    add_edge(adjlist, 2, 5);
    add_edge(adjlist, 5, 3);
    add_edge(adjlist, 5, 4);

    PrintAdjList(adjlist,6);
  
    
}