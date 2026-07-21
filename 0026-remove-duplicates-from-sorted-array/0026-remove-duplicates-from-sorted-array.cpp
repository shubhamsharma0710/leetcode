class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>frq;
        int j=0;
        for(int i=0;i<n;i++){
            if(frq[nums[i]]==0){
                nums[j]=nums[i];
                j++;
                frq[nums[i]]++;
            }

        }
        return j;

    }
};