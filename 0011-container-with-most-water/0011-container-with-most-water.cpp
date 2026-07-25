class Solution {
public:
    int maxArea(vector<int>& height) {
    int l=0,r=height.size()-1,ans=0;
    while(l<r){
        int h=0;
        if(height[l]<height[r]){
            h=height[l];
        }else{
            h=height[r];
        }
        int area=h*(r-l);
        if(area>ans) ans=area;
        if(height[l]<height[r]){
            l++;
        }else{
            r--;
        }
    }
    return ans;
}
};