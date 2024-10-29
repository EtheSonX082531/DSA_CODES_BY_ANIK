#include<bits/stdc++.h>
using namespace std;

//memoization 

int Factorial(int n,vector<int>&dp) {
    if(n==1 || n==0) {
        return 1;
    }
    else if(dp[n]!=-1) {
        return dp[n];
    }
    else {
        dp[n]= n*Factorial(n-1,dp);
        return dp[n];
    }
}

int main()
{
    int n;
    cout << "Enter input:" << endl;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout << "Factorial of " << n <<" is: " << Factorial(n,dp) << endl;
    return 0;
}
