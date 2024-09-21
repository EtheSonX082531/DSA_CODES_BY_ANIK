#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of activity:" << endl;
    cin>>n;
    int start[n];
    int finish[n];
    cout << "Enter all starting time sequentially:" << endl;
    for(int i=0; i<n; i++) {
        cin>>start[i];
    }
    cout << "Enter all finishing time sequentially:" << endl;
    for(int i=0; i<n; i++) {
        cin>>finish[i];
    }
    //Sorting activity by finishing time
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(finish[j]>=finish[j+1]) {
                swap(finish[j],finish[j+1]);
                swap(start[j],start[j+1]);
            }
        }
    }
    vector<int>v;
    v.push_back(0);
    int j=0,i=1;
    while(i<n) {
        if(start[i]>=finish[j]) {
            v.push_back(i);
            j=i;
        }
        i++;
    }
    cout << "Max Activity can be performed:" << endl;
    for(int i=0; i<v.size(); i++) {
        cout<<start[v[i]]<<" ";
    }
    cout<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<finish[v[i]]<<" ";
    }
    return 0;
}
