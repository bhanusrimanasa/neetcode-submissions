class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.length();
        int n=t.length();
        unordered_map<char, int> freq;
        int minlen=INT_MAX;
        if(m<n)return "";
        string ans="";
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[t[i]]++;
        }
        int l=0;
        int r=0;
        int cnt=n;
        while(r<m){
           
                if(mpp.find(s[r])!=mpp.end()){
                    
                    freq[s[r]]++;
                    if(freq[s[r]]<=mpp[s[r]]){
                        cnt--;
                    }
                }
            while(cnt==0){
               if(r-l+1<minlen){
                minlen=r-l+1;
                ans=s.substr(l,minlen);
               }
                if(mpp.find(s[l])!=mpp.end()){
                    freq[s[l]]--;
                        if(freq[s[l]]<mpp[s[l]]){
                            cnt++;
                            
                        }  
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};
