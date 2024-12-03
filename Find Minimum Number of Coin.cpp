#include<iostream>
using namespace std;
#define INF INT_MAX

int main()
{
    int n,A;
    cout << "Enter number of coins:" << endl;
    cin>>n;
    int coins[n];
    cout << "Enter all coins:" << endl;
    for(int i=0; i<n; i++) {
        cin>>coins[i];
    }
    cout << "Enter amount:" << endl;
    cin>>A;
    int dp[n+1][A+1];
    for(int i=0; i<n+1; i++) {
        for(int j=0; j<A+1; j++) {
            if(i==0) {
                dp[i][j]=INF;
            }
            else if(j==0) {
                dp[i][j]=0;
            }
            else if(coins[i-1]>j) {
                dp[i][j]=dp[i-1][j];
            }
            else {
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
            }
        }
    }
    cout << "Minimun Coin Change Dp Table:" << endl;
    for(int i=0; i<n+1; i++) {
        for(int j=0; j<A+1; j++) {
            if(dp[i][j]==INF) {
                cout<<"INF"<<" ";
            }
            else {
                cout<<dp[i][j]<<" ";
            }
        }
        cout << endl;
    }
    cout << "Minimun Coin Need: " << dp[n][A] << endl;
    return 0;
}
