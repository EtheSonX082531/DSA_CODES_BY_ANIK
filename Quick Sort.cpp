#include <iostream>
using namespace std;

int Partition(int arr[], int start, int end)
{
    int pos = start;
    while (start <= end)
    {
        if (arr[end] >= arr[start])
        {
            int temp = arr[pos];
            arr[pos] = arr[start];
            arr[start] = temp;
            pos++;
        }
        start++;
    }
    return (pos - 1);
}

void QuickSort(int arr[], int start, int end)
{
    if (start >= end)
    {

        return;
    }
    int pivot = Partition(arr, start, end);
    QuickSort(arr, start, pivot - 1);
    QuickSort(arr, pivot + 1, end);
    return;
}

int main()
{
    int n;
    cout << "Enter Arrray Size:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements Here:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    QuickSort(arr, 0, n - 1);
    cout << "After Applying Quick Sort:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
