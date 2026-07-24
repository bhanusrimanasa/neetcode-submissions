class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int maxi=1;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int num:st){
            if(!st.count(num-1)){
                int curr=num;
                int ans=1;
                while(st.count(curr+1)){
                    ans++;
                    curr++;
                }
                maxi=max(maxi,ans);
            }
            
        }
        return maxi;
    }
};
