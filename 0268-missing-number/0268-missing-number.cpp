class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 =0;
        int n = nums.size();
        // XOR all the elements in the array
        for (int i = 0; i < n; ++i) {
            xor1 ^= nums[i];
        }
        
        // XOR all the numbers from 0 to n
        for (int i = 0; i <= n; ++i) {
            xor2 ^= i;
        }
        
        // XORing xor1 and xor2 gives the missing number
        return xor1 ^ xor2;

    }
};