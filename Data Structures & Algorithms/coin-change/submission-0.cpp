class Solution {
public:
int solve(int ind,vector<int>&coins,int amount,vector<vector<int>>&dp){
    if(amount==0)return 0;
    if(ind>=coins.size()||amount<0)return INT_MAX;
    if(dp[ind][amount]!=-1)return dp[ind][amount];
    int take=INT_MAX;
    if(amount-coins[ind]>=0){
        int res=solve(ind,coins,amount-coins[ind],dp);
        if (res != INT_MAX) { 
                take = 1 + res; 
            }
    }
    int nottake=solve(ind+1,coins,amount,dp);
    return dp[ind][amount]=min(take,nottake);
    

}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
          vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        for(int i=0;i<n;i++){
            dp[i][0]=0;
        }
      
        int ans=solve(0,coins,amount,dp);
        if(ans==INT_MAX)return -1;
        return ans;
    }
};
