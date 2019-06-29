#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[], int low, int high)
{
    int pivot = arr[low+(high-low)/2];
    int i = low - 1;
    int j = high + 1;
    while(1)
    {
        while(arr[++i] < pivot);
        while(arr[--j] > pivot);
        if(i >= j)
            return j;
        std::swap(arr[i], arr[j]);
    }
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int index = Partition(arr, low, high);
        QuickSort(arr, low, index);    /* note: not index-1 */
        QuickSort(arr, index + 1, high);
    }
}

int main()
{
    int n;
	int a[100010];
	cin>>n; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	QuickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
