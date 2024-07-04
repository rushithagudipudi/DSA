//leetcode - 283

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0,nz=0;
        int n = nums.size();
        while(nz < n){
            if(nums[nz] != 0){
                swap(nums[nz], nums[z]);
                nz++;
                z++;
            }
            else{
                nz++;
            }
        }
    }
};