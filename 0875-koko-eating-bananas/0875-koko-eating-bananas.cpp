class Solution {
public:
    bool canFinish(vector<int>& piles, int h, int speed){
        int hour=0;
        for(int bananas:piles){
            hour+=(bananas+speed-1)/speed;
        }
        return hour <=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(canFinish(piles,h,mid)){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low; 
    }
};