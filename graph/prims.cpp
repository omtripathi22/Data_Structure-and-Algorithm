#include<bits/stdc++.h>
#define pp pair<int,int>
#define ll long long int
using namespace std;

vector<list<pp>>graph;
void add_edge(int u, int v ,int wt,bool bidir=true){
    graph[u].push_back({v,wt});
    if(bidir){
        graph[v].push_back({u,wt});
    }
}

ll prims(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp>>pq;
    unordered_set<int>vis;
    vector<int>par(n+1);
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[i]=INT_MAX;
    }
    pq.push({0,src});
    mp[src]=0;
    int total_count=0;
    int result=0;
    while(total_count< n && !pq.empty()){
        pp curr=pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count++;
        result+=curr.first;
        pq.pop();

        for(auto neigh:graph[curr.second]){
            if(!vis.count(neigh.first) && mp[neigh.first]> neigh.second){
                pq.push({neigh.second,neigh.first});
                par[neigh.first]=curr.second;
                mp[neigh.first]=neigh.second;
            }
        }
    }
    return result;
}

int main(){
    int n,m;
    cin >>n >>m;
    graph.resize(n+1,list<pp>());
    while(m--){
        int u, v,wt;
        cin>> u>>v>>wt;
        add_edge(u,v,wt);
    }

    int src;
    cin>>src;
    cout << prims(src,n)<< endl;
    return 0;
}