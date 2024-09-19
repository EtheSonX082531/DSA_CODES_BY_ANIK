#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int start, int mid, int end)
{
    int left = start;
    int right = mid + 1;
    int s = (end - start) + 1;
    vector<int> v(s);
    int index = 0;
    while (left <= mid && right <= end)
    {
        if (arr[right] <= arr[left])
        {
            v[index] = arr[right];
            right++;
            index++;
        }
        else
        {
            v[index] = arr[left];
            left++;
            index++;
        }
    }
    while (left <= mid)
    {
        v[index] = arr[left];
        left++;
        index++;
    }
    while (right <= end)
    {
        v[index] = arr[right];
        right++;
        index++;
    }
    index = 0;
    while (start <= end)
    {
        arr[start] = v[index];
        start++;
        index++;
    }
}

void MergeSort(int arr[], int start, int end)
{
    if (start == end)
    {
        return;
    }
    int mid = (start + end) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    Merge(arr, start, mid, end);
    return;
}

int main()
{
    int n;
    cout << "Enter Your Array Size:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements here:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr, 0, n - 1);
    cout<<"After applying Merge Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
