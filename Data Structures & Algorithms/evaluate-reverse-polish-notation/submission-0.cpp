class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        int a;
        int b;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                b=st.top();
                st.pop();
                a=st.top();
                st.pop();
                if (tokens[i] == "+")
                    st.push(a + b);
                else if (tokens[i] == "-")
                    st.push(a - b);
                else if (tokens[i] == "*")
                    st.push(a * b);
                else
                    st.push(a / b);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
