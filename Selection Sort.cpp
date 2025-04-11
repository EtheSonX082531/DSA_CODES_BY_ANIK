#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Array size:"<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter Array elements:" << endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    //Selection Sort
    for(int i=0; i<n-1; i++) {
        int smallIndex=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[smallIndex]) {
                smallIndex=j;
            }
        }
        swap(arr[i],arr[smallIndex]);
    }
    //Printing Array
    cout<<"After applying Selection Sort:"<<endl;
    for(int i:arr) {
        cout<<i<<" ";
    }
    return 0;
}
