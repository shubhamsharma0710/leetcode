class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int n=nums.size();
      unordered_map<int,int>frq;
      for(int num: nums){
        frq[num]++;
        if(frq[num]>1) return num;
        
        
      }  
      
      return -1;
    }
};