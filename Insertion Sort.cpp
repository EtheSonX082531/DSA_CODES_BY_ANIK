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
    //Insertion Sort
    for(int i=1; i<n; i++) {
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
        }
    }

    //Printing Array
    cout<<"After applying Insertion Sort:"<<endl;
    for(int i:arr) {
        cout<<i<<" ";
    }
    return 0;
}
