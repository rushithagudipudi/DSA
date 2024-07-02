#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int i=low;
    int j=mid+1;
    while(i<=mid && j <= high){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void merge_sort(vector<int> &arr, int low, int high){
    //base condition
    if(low >= high)
    return;
    
    int mid = (low+high)/2;
    merge_sort(arr, low , mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
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
    
    merge_sort(arr,0,n-1);
    
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}