#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int a, int b, bool bidir = true)
{
    graph[a].push_back(b);
    if (bidir)
    {
        graph[b].push_back(a);
    }
}

// kahn's algorithm
void topo()
{
    vector<int> indegree(v, 0);
    for (int i = 0; i < v; i++)
    {
        for (auto neigh : graph[i])
        {
            indegree[neigh]++;
        }
    }
    queue<int> q;
    unordered_set<int> visited;
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
            visited.insert(i);
        }
    }
    cout << "printing" << endl;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto neigh : graph[node])
        {
            if (!visited.count(neigh))
            {
                indegree[neigh]--;
                if (indegree[neigh] == 0)
                {
                    q.push(neigh);
                    visited.insert(neigh);
                }
            }
        }
    }
}

int main()
{
    cout << "Enter the no. of vertics:";
    cin >> v;
    int e;
    cout << "Enter the no. of edges:";
    cin >> e;
    graph.resize(v, list<int>());
    cout << "enter edges:" << endl;
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        add_edge(x, y, false);
    }
    topo();
}