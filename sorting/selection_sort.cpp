#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//select minium & swap , from start of array
void selection_sort(vector<int> &arr, int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[mini] > arr[j])
            mini = j;
        }
        swap(arr[mini], arr[i]);
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
    
    selection_sort(arr,n);
    
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}