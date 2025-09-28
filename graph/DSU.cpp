#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> &parent, int x)
{
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

// void Union(vector<int> &parent, vector<int> &rank, int a, int b)
// {
//     a = find(parent, a);
//     b = find(parent, b);

//     if (rank[a] >= rank[b])
//     {
//         rank[a]++;
//         rank[b] = a;
//     }
//     else
//     {
//         rank[b]++;
//         rank[a] = b;
//     }
// }

void Union(vector<int> &parent, vector<int> &rank, int a, int b)
{
    a = find(parent, a);
    b = find(parent, b);

    if (a == b)
        return; // already in same set

    if (rank[a] > rank[b])
    {
        parent[b] = a;
    }
    else if (rank[a] < rank[b])
    {
        parent[a] = b;
    }
    else
    {
        parent[b] = a;
        rank[a]++;
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }

    while (m--)
    {
        string str;
        cin >> str;
        if (str == "union")
        {
            int x, y;
            cin >> x >> y;
            Union(parent, rank, x, y);
        }
        else
        {
            int x;
            cin >> x;
            cout << find(parent, x) << endl;
        }
    }
    return 0;
}