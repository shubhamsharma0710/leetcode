class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>frq;
        for(int ch:s){
            frq[ch]++;
        }
        for(int i=0;i<s.size();i++){
            if(frq[s[i]]==1) return i;
        }
        return -1;
    }
};