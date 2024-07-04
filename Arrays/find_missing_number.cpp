class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //striver
        int xor1 = 0;
        int xor2 = 0;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i);
        }
        xor1 = xor1 ^ (i);

        return (xor2 ^ xor1);
    }
};