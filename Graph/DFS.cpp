#include <iostream>
#include<queue>
#include<vector>
using namespace std;


// Create Adjecent list
// Breadth first it

	void add_edge(vector<int> adjlist[], int FirstNode, int SecondNode)
	{
		adjlist[FirstNode].push_back(SecondNode);
		adjlist[SecondNode].push_back(FirstNode);

	}

	void PrintAdjList(vector<int> adjlist[], int N_Nodes)
	{
		vector<int>::iterator it;
		for (int i = 0; i < N_Nodes; i++)
		{
			cout << i << "------>";
			for (it = adjlist[i].begin(); it != adjlist[i].end(); it++)
			{
				cout << *it << " ";
			}
			cout << endl;

		}
	}


	void DFS(int Node, vector<int>& vis, vector<int> adjlist[], vector<int> DFSres)
	{
		DFSres.push_back(Node);

		vis[Node] = 1;
		for (auto it : adjlist[Node])
		{
			if (!vis[it])
			{
				DFS(it, vis, adjlist, DFSres);
			}
		}
	}

	vector<int> DFSofGraph(vector<int> adjlist[], int N_Nodes)
	{
		vector<int> DFSres;
		vector<int> vis(N_Nodes, 0);

		for (int i = 0; i < N_Nodes; i++)
		{
			if (!vis[i])
			{
				DFS(i, vis, adjlist, DFSres);

			}
		}

		return DFSres;
	}


int main()
{
	int N_Nodes = 6;
	vector<int> adjlist[6];


	add_edge(adjlist,0,1);
	add_edge(adjlist,0,5);
	add_edge(adjlist,1,2);
	add_edge(adjlist,2,5);
	add_edge(adjlist,2,3);
	add_edge(adjlist,3,4);
	add_edge(adjlist,4,5);
	PrintAdjList(adjlist, 6);




	
}

