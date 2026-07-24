class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int n=prices.size();
        int mini=prices[0];
        int i=1;
        while(i<n){
            int profit=0;
            if(prices[i]>mini){
                profit=prices[i]-mini;
                maxprofit=max(maxprofit,profit);
            }
            else{
                mini=min(mini,prices[i]);
            }
            i++;
        }
        return maxprofit;
    }
};
