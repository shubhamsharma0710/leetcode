class Solution {
public:
    vector<vector<string>> ans;
    vector<string> temp;
    bool isPalindrome(string &s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    void solve(int index, string &s) {
        if (index == s.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                temp.push_back(s.substr(index, i - index + 1));
                solve(i + 1, s);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        solve(0, s);
        return ans;
    }
};