#include<bits/stdc++.h>
using namespace std;

int KnapSack(int n,int W,int weight[],int profit[]) {
    int Tab[n+1][W+1];
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=W; j++) {
            if(i==0 || j==0) {
                Tab[i][j]=0;
            }
            else if(weight[i-1]<=j) {
                Tab[i][j]=max(Tab[i-1][j],Tab[i-1][j-weight[i-1]]+profit[i-1]);
            }
            else {
                Tab[i][j]=Tab[i-1][j];
            }
        }
    }
    return Tab[n][W];
}

int main()
{
    int n,W;
    cout << "Enter number of items:" << endl;
    cin>>n;
    cout << "Enter weights for every items:" << endl;
    int weight[n];
    for(int i=0; i<n; i++) {
        cin>>weight[i];
    }
    cout << "Enter max weight of Knapsack:" << endl;
    cin>>W;
    cout << "Enter profits for every items:" << endl;
    int profit[n];
    for(int i=0; i<n; i++) {
        cin>>profit[i];
    }
    int maxProfit=KnapSack(n,W,weight,profit);
    cout << "Max profit is:" <<maxProfit<<endl;
    return 0;
}
