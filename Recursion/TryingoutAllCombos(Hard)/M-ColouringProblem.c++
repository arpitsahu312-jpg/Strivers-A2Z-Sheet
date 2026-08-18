#include<bits/stdc++.h>
using namespace std;

bool isSafe(int node, int color[], vector<vector<bool>>&graph, int n, int col) {
    for (int k = 0; k < n; k++) {
        // Check if adjacent node has the same color
        if (k != node && graph[k][node] == 1 && color[k] == col) {
            return false;
        }
    }
    return true;  
}

bool solve(int node, int color[], int m, int N,vector<vector<bool>>&graph ) {
    if (node == N) {
        return true;
    }

    for (int i = 1; i <= m; i++) {
        if (isSafe(node, color, graph, N, i)) {
            color[node] = i;
            if (solve(node + 1, color, m, N, graph)) return true;
            color[node] = 0;  
        }
    }
    return false;  
}

bool graphColoring(vector<vector<bool>>&graph, int m, int N) {
    int color[N] = { 0 };
    if (solve(0, color, m, N, graph)) return true;
    return false;
}

int main() {
    int N;
    cout<<"Enter the value of N"<<endl; 
    cin>>N;
    int m;  
    cout<<"Enter the value of M"<<endl;
    cin>>m;
    int E;  
    cout<<"Enter the value of E"<<endl;
    cin>>E;
    vector<vector<bool>>graph(N,vector<bool>(N,false));
    for(int i=0;i<E;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        graph[n1][n2]=1;
        graph[n2][n1]=1;
    }
    cout << graphColoring(graph, m, N);
    return 0;
}