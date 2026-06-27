class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>frq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>k){
                frq.erase(nums[i-k-1]);
            }
            if(frq.count(nums[i])){
                return true;
            }
            frq.insert(nums[i]);
        }
        return false;

        // int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] == nums[j] && (j - i) <= k) {
        //             return true;
        //         }
        //     }
        // }

        // return false;
    }
};