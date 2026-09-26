class Solution {
public:
    string removeStars(string s) {

        stack<char>st;

        st.push(s[0]);

        for(int i=1;i<s.size();i++){

            if(s[i]=='*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        vector<char>ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        string str="";

        for(int i=0;i<ans.size();i++){
            str+=ans[i];
        }

        return str;
        
    }
};