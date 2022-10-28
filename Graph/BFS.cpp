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


vector<int> BFS(vector<int> adjlist[], int N_Nodes)
{
	// Vector to be returned
	vector<int> BFSresult;
	vector<int> vis(N_Nodes, 0);
	for (int i = 0; i < N_Nodes; i++)
	{
		if (!vis[i])
		{
			queue<int> q;
			q.push(i);
			vis[i] = 1;
			while (!q.empty())
			{
				int node = q.front();
				q.pop();
				BFSresult.push_back(node);
				for (auto it : adjlist[node])
				{
					if (!vis[it])
					{
						q.push(it);
						vis[it] = 1;
					}
				}
			}
		}
	}

	return BFSresult;
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

	vector<int> res;
	res = BFS(adjlist, 6);
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	
}

