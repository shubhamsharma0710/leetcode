class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>frqp(26,0);
        vector<int>frqs(26,0);
        vector<int>ans;
        for(char c:p){
            frqp[c-'a']++;
        }
        int k=p.size();
        for(int i=0;i<s.size();i++){
            frqs[s[i]-'a']++;
            if(i>=k){
                frqs[s[i-k]-'a']--;
            }
            if(frqp==frqs){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};