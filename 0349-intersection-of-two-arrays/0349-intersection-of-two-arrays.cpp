class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> frq;
        vector<int>ans;
        for(int x:nums1){
            frq[x]=1;
        }
        for(int x:nums2){
            if(frq[x]==1){
                ans.push_back(x);
                frq[x]=0;
            }
        }
        return ans;
    }
};