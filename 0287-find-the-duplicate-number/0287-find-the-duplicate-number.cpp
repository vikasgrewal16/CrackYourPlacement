class Solution {
public:
    int findDuplicate(const vector<int>& nums) {
    // Phase 1: Finding the intersection point
    int tortoise = nums[0];
    int hare = nums[0];
    
    do {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
    } while (tortoise != hare);
    
    // Phase 2: Finding the entrance to the cycle
    int ptr1 = nums[0];
    int ptr2 = tortoise;
    
    while (ptr1 != ptr2) {
        ptr1 = nums[ptr1];
        ptr2 = nums[ptr2];
    }
    
    return ptr1;
}
};