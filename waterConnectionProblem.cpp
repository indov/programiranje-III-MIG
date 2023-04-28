#include <bits/stdc++.h>

using namespace std;

void dfs(int nod, vector<pair<int, int>>g[], int &minimumTezina, int &end, int visited[]){
    visited[nod] = 1;
    for(auto e:g[nod]){
        if(visited[e.first] == 0){
            minimumTezina = min(minimumTezina, e.second);
            end = e.first;
            dfs(e.first, g, minimumTezina, end, visited);
        }
    }
}

int main(){
    int n = 4, p = 2;
    vector<int> a = {1, 3};
    vector<int> b = {2, 4};
    vector<int> d = {60, 50};


    int visited[n+1];
    vector<vector<int>> rez;
    memset(visited, 0, sizeof(visited));
    vector<int>in(n+1, 0);
    vector<int>out(n+1, 0);
    vector<pair<int, int>>graph[n+1];
    for(int i = 0; i < p; i++){
        out[a[i]] = 1;
        in[b[i]] = 1;
        graph[a[i]].push_back({b[i],d[i]});
    }
    for(int i = 1; i<= n; i++){
        if(in[i] == 0 && out[i] == 1 && visited[i] == 0){
            int source = i;
            int kraj;
            int minimumTezina = INT_MAX;
            dfs(i, graph, minimumTezina, kraj, visited);
            rez.push_back({source, kraj, minimumTezina});
        }
    }

    for(int i = 0; i < rez.size(); i++){
        for(int j = 0; j < rez[i].size(); j++)
            cout << rez[i][j] << " ";
        cout << endl;
    }
    return 0;
}