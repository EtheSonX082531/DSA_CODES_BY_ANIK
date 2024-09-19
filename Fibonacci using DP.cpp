#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n, vector<int>& v) {  // Pass vector by reference
    if (n == 0 || n == 1) {
        return n;
    }
    if (v[n] != -1) {  // Check if already calculated
        return v[n];
    }
    v[n] = Fibonacci(n - 1, v) + Fibonacci(n - 2, v);  // Store result
    return v[n];
}

int main() {
    int n;
    cout << "Enter Fibonacci index:" << endl;
    cin >> n;
    vector<int> v(n + 1, -1);  // Initialize vector to -1 to represent uncalculated values
    cout << "Fibonacci is: " << Fibonacci(n, v) << endl;
    return 0;
}
