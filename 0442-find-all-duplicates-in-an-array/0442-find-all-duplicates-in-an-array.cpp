class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>frq;
        for(int num:nums){
            frq[num]++;
        }
        
        for(auto it : frq){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};