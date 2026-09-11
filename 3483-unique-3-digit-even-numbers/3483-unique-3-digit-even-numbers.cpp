class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> uniqueNumbers;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j && j!=k && i!=k){
                        int num=digits[i]*100 +digits[j]*10 + digits[k];
                        if(num>=100 && num%2==0){
                            uniqueNumbers.insert(num);
                        }
                    }
                }
            }
        }
        return uniqueNumbers.size();
    }
};