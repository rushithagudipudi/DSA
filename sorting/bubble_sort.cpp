#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//select maxium and push at end
void bubble_sort(vector<int> &arr, int n){
    for(int i=0;i<=n-2;i++){
        int swapp = 0;
        for(int j=0;j<=n-2-i;j++){
            if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapp++;
            }
        }
        if(swapp == 0)
        break;
    }
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