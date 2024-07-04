#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i] > largest)
            largest = arr[i];
        }
        return largest;
    }
};

int main(){
int n;
cin>>n;
vector<int> arr(n);

for(int i=0;i<n;i++){
cin>>arr[i];
}
Solution ob;
cout<<ob.largest(arr,n)<<"\n";
} 
return 0;
}
