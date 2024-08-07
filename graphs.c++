
#include <vector>
#include<iostream>
using namespace std;

void addEdge(vector<vector<int>> &g, int i, int j)
{
    g[i][j] = 1;
    g[j][i] = 1; 
}

void displayMatrix(vector<vector<int>> &g)
{
    int V = g.size();
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        cout << g[i][j] << " ";
        cout << endl;
    }
}

int main()
{

    int V = 4;
    vector<vector<int>> g(V, vector<int>(V, 0));

    // Now add edges one by one
    addEdge(g, 0, 3);
    addEdge(g, 0, 2);
    addEdge(g, 1, 2);
    addEdge(g, 2, 3);


    cout << "Adjacency Matrix Representation" << endl;
    displayMatrix(g);

    return 0;
}
