#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &arr, int low, int high){
    int pivot = low;
    int i=low;
    int j = high;
    while(i < j){
    while(i<=high && arr[i] <= arr[pivot]){
        i++;
    }
    while(j >= low && arr[j] > arr[pivot]){
        j--;
    }
    if(i<j)
    swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[pivot]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high){
    //base condition
    if(low < high){
    int partition_index = f(arr,low, high);
    quick_sort(arr, low, partition_index-1);
    quick_sort(arr, partition_index+1, high);
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Before Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    quick_sort(arr,0,n-1);
    
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}