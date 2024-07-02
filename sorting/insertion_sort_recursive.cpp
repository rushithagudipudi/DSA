#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//take elements from left and place it in its correct position 
void insertion_sort(vector<int> &arr, int i, int n){
    //base condition
    if(i == n)
    return;
    int j =i;
    while(j>0 && arr[j] < arr[j-1]){
    swap(arr[j], arr[j-1]);
    j--;
    }
    insertion_sort(arr,i+1,n);
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
    
    insertion_sort(arr,0,n);
    
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}