class Solution {
public:
    int reverseDegree(string s) {
        int result=0;
        for(int i=0;i<s.length();i++){
            int reversedIndex=26-(s[i]-'a');
            int position=i+1;
            result+=reversedIndex*position;
        }
        return result;
    }
};