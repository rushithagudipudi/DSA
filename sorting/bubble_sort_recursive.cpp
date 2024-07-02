#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//select maxium and push at end
void bubble_sort(vector<int> &arr, int n){
    if(n == 1)
    return;
    
    for(int j=0;j<=n-2;j++){
        int swapp = 0;
        if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
        swapp++;
        }
        if(swapp == 0)
        break;
    }
    bubble_sort(arr, n-1);
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
    
    bubble_sort(arr,n);
    
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}