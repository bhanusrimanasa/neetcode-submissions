class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int n=height.size();
        int r=n-1;
        int lmax=0;
        int rmax=0;
        int vol=0;
        while(l<r){
            if(height[l]<height[r]){
                if(height[l]<lmax){
                    vol+=lmax-height[l];
                }
                else{
                    lmax=height[l];
                }
                l++;
            }
            else{
                if(height[r]<rmax){
                    vol+=rmax-height[r];
                }
                else{
                    rmax=height[r];
                }
                r--;
            }
        }
        return vol;
    }
};
