class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int num:nums){
            total+=num;
        }
        int lsum=0;
        for(int i=0;i<n;i++){
            int rsum=total-lsum-nums[i];
            if(lsum==rsum){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};