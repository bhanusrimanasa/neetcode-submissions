class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int n=heights.size();
        int r=n-1;
        int maxvol=0;
        int mini=0;
        while(l<r){
            int vol=0;
            if(heights[l]<heights[r]){
                mini=l;
            }
            else{
                mini=r;
                
            }
            vol=(r-l)*heights[mini];
            maxvol=max(maxvol,vol);
            if(mini==l){
                l++;
            }
            else{
                r--;
            }
        }
        return maxvol;
    }
};
