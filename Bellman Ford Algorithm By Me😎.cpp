#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX

int main()
{
    int V,E,src;
    bool flag=true;
    cout << "Enter the number of Vertex:" << endl;
    cin>>V;
    cout << "Enter the number of Edges:" << endl;
    cin>>E;
    int edge[E][3];
    cout << "Enter all edge (u,v,weight):" << endl;
    for(int i=0; i<E; i++) {
        cin>>edge[i][0]>>edge[i][1]>>edge[i][2];
    }
    cout << "Enter Source Vertex:" << endl;
    cin>>src;
    int dist[V];
    for(int i=0; i<V; i++) {
        if(i==src) {
            dist[i]=0;
        }
        else {
            dist[i]=INF;
        }
    }
    for(int i=0; i<V-1; i++) {
        for(int j=0; j<E; j++) {
            if (dist[edge[j][0]] != INF && dist[edge[j][0]] + edge[j][2] < dist[edge[j][1]]) {
                dist[edge[j][1]]=dist[edge[j][0]]+edge[j][2];
            }
        }
    }

    for(int i=V-1; i<V; i++) {
        for(int j=0; j<E; j++) {
            if (dist[edge[j][0]] != INF && dist[edge[j][0]] + edge[j][2] < dist[edge[j][1]]) {
                flag=false;
            }
        }
    }
    if(flag==true) {
        cout << "Shortest path from source:" << endl;
        for(int i=0; i<V; i++) {
            if(dist[i]==INF) {
                cout<<"INF"<<" ";
            }
            else {
                cout<<dist[i]<<" ";
            }
        }
    }
    else {
        cout << "Negative Cycle detected!" << endl;
    }
    return 0;
}
