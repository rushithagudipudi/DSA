//leetcode - 1752

class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] <= nums[i+1]){
                continue;
            }
            else{
                count++;
            }
        }
        if(nums[nums.size()-1] > nums[0]){
            count++;
        }
        cout<<count;
        if(count >= 2)
            return false;
        return true;
    }
};