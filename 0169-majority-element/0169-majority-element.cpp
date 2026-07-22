class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int ,int> frq;
        for(int num:nums){
            frq[num]++;
            if(frq[num]>n/2) return num;
        }
        return -1;
    }
};