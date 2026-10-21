#include <bits/stdc++.h>

using namespace std;

class Graph {
    int V;
    vector<int> kwiatkiid;
    vector<list<int> > adj;
    bool kwiaciarnia = false;
    vector<int> wynikvector;
    string wynik = "";
    int wartownik = -1;

    void DFSUtil(int v, vector<bool>& visited)
    {
        visited[v] = true;
        for (auto i : kwiatkiid) {
            if (i == v && (wartownik == -1 || wartownik == v)) {
                kwiaciarnia = true;
                wartownik = v;
            }
        }
        if(kwiaciarnia){
            wynikvector.push_back(v+1);
        }
        for (int i : adj[v]) {
            if (!visited[i])
                DFSUtil(i, visited);
        }
        for (auto i : kwiatkiid) {
            if (i == v && wartownik == v) {
                kwiaciarnia = false;
                wartownik = -1;
            }
        }
    }

public:
    Graph(int V, vector<int> flowersid)
    {
        this->V = V;
        adj.resize(V);
        this->kwiatkiid = flowersid;
    }

    void printResult(){
        sort(wynikvector.begin(), wynikvector.end());
        for (unsigned i = 0; i < wynikvector.size(); i++){
            wynik += to_string(wynikvector[i]) + " ";
        }    
        cout << wynik;
    }


    void addEdge(int v, int w) { adj[v].push_back(w);adj[w].push_back(v); }

    
    void DFS(int v)
    {
        vector<bool> visited(V, false);
        DFSUtil(v, visited);
    }
};

int main()
{
    int nodes;
    int flowershops;
    vector<int> flowersid;
    cin >> nodes >> flowershops;
    for (int i = 0;i<flowershops;i++){
        int temp;
        cin >> temp;
        flowersid.push_back(temp-1);
    }
    Graph g(nodes,flowersid);
    for (int i = 0;i<nodes-1;i++){
        int temp1,temp2;
        cin >> temp1 >> temp2;
        g.addEdge(temp1-1, temp2-1);
    }

    
    g.DFS(0);
    g.printResult();
    cout << endl;

    return 0;
}