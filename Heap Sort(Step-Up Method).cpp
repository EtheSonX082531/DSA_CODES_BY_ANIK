#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cout<<"Enter Array Size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements here"<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++) {
        x=(i-1)/2;
        if(arr[x]<=arr[i]) {
            swap(arr[x],arr[i]);
            int j=x;
            while(j>0) {
                x=(j-1)/2;
                if(arr[x]<=arr[j]) {
                    swap(arr[x],arr[j]);
                }
                j=x;
            }
        }
    }
    cout<<"After applying Heap Sort(Step-Up method):"<<endl;
    cout<<"Heap tree array representation:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
