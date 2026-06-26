class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int>frq(26,0);
        for(char ch:s)frq[ch-'a']++;
        for(char ch:t)frq[ch-'a']--;
        for(int x:frq){
            if(x!=0)return false;
        }
        return true;
    }
};