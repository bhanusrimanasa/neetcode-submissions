class Solution {
public:
    int solve(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
        if(j-i==1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int maxi=0;
        for(int k=i+1;k<j;k++){
            maxi=max(maxi,nums[i]*nums[k]*nums[j]+solve(i,k,nums,dp)+solve(k,j,nums,dp));
        }
        return dp[i][j]=maxi;
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(0,n-1,nums,dp);
    }
};