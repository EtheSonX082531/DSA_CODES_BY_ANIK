#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int n, vector<int> &v)
{
    if (n == 0 or n == 1)
    {
        v[n] = n;
        return v[n];
    }
    else if (v[n] > -1)
    {
        return v[n];
    }
    v[n] = Fibonacci(n - 1, v) + Fibonacci(n - 2, v);
    return v[n];
}

int main()
{
    int n;
    cout << "Enter Fibonacci index:" << endl;
    cin >> n;
    vector<int> v(n + 1, -1);
    cout << "Fibonacci is:" << Fibonacci(n, v) << endl;
    cout<<"Fibonacci Row:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
