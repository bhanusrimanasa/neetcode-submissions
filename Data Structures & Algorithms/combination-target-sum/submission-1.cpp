class Solution {
public:
void solve(int index,vector<int>&nums,int target,int sum,vector<int>&curr,vector<vector<int>>&ans){
    
    if(sum==target){ans.push_back(curr);
    return;
    }
    if(index==nums.size()||sum>target)return;
    solve(index+1,nums,target,sum,curr,ans);
    sum+=nums[index];
    curr.push_back(nums[index]);
    solve(index,nums,target,sum,curr,ans);
    sum-=nums[index];
    curr.pop_back();

}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>curr;
        vector<vector<int>>ans;
        solve(0,nums,target,0,curr,ans);
        return ans;
    }
};
