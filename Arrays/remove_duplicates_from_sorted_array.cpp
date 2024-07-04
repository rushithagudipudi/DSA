//leetcode - 26

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 0;
        int n = nums.size();

        for(int curr=1;curr<n;curr++){
            if(nums[curr] == nums[prev]){
                continue;
            }
            else{
                nums[prev+1] = nums[curr];
                prev++;
            }
        }
        return prev+1;
    }
};