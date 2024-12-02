#include<iostream>
using namespace std;

int main()
{
    string x,y;
    cout << "Enter 1st String:" << endl;
    cin>>x;
    cout << "Enter 2nd String:" << endl;
    cin>>y;
    int dp[x.size()+1][y.size()+1];
    for(int i=0; i<x.size()+1; i++) {
        for(int j=0; j<y.size()+1; j++) {
            if(i==0 || j==0) {
                dp[i][j]=0;
            }
            else if(x[i]==y[j]) {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout << "Dp table for LCS:" << endl;
    for(int i=0; i<x.size()+1; i++) {
        for(int j=0; j<y.size()+1; j++) {
            cout<<dp[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "LONGEST COMMON SUB-SEQUENCE LENGTH IS: " << dp[x.size()][y.size()]<< endl;
    return 0;
}
