class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        string ans="";
        int increment=2*(numRows-1);
        for(int r=0;r<numRows;r++){
            for(int i = r; i < s.length(); i += increment){
                ans+=s[i];
                int diagonal=i+increment-2*r;
                if(r>0 && r<numRows-1 && diagonal<s.length()){
                    ans+=s[diagonal];
                }
            }
        }
        return ans;

    }
};