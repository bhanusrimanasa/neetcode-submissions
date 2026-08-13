class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int maxlen=1;
        if(n<=1)return s;
        int index=0;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    if(j-i<=2||dp[i+1][j-1]==true){dp[i][j]=true;
                    if(j-i+1>maxlen){
                        maxlen=j-i+1;
                        index=i;
                    }}
                }
            }
        }
        return s.substr(index,maxlen);
    }
};