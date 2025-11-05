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

unordered_map<int,int> dijkstra(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp>>pq;
    unordered_set<int>vis;
    vector<int>via(n+1);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[i]=INT_MAX;
    }
    pq.push({0,src});
    mp[src]=0;
    while(!pq.empty()){
        pp curr=pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        pq.pop();

        for(auto neigh:graph[curr.second]){
            if(!vis.count(neigh.first) && mp[neigh.first]>mp[curr.second]+ neigh.second){
                pq.push({mp[curr.second]+ neigh.second,neigh.first});
                via[neigh.first]=curr.second;
                mp[neigh.first]=mp[curr.second]+ neigh.second;
            }
        }
    }
    return mp;
}

int main(){
    int n,m;
    cin >>n >>m;
    graph.resize(n,list<pp>());
    while(m--){
        int u, v,wt;
        cin>> u>>v>>wt;
        add_edge(u,v,wt);
    }

    int src;
    cin>>src;
    unordered_map<int,int>sp=dijkstra(src,n);

    for(auto key:sp){
        cout <<key.first <<" " <<key.second <<endl;
    }
    int dest;
    cin >> dest;
    return 0;
}