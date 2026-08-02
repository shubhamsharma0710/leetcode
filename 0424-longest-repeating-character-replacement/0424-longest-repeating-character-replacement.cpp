class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>cnt(26,0);
        int ans=0;
        int l=0;
        int maxCnt=0;
        for(int r=0;r<s.size();r++){
            cnt[s[r]- 'A']++;
            maxCnt=max(maxCnt,cnt[s[r]-'A']);
            while((r-l+1)-maxCnt>k){
                cnt[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};