class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int i=0;
        while(i<chars.size()){
            char ch=chars[i];
            int count=0;
            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }
            ans+=ch;
            if(count>1)ans+=to_string(count);
        }
        chars.clear();
        for (char c : ans)
            chars.push_back(c);
        return chars.size();
    }
};