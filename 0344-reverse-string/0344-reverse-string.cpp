class Solution {
public:
    void reverseString(vector<char>& s) {

        // for(int i=0;i<s.size()/2;i++){

        //     char temp=s[s.size()-1-i];

        //     s[s.size()-1-i]=s[i];
        //     s[i]=temp;
        // }


        // USING STACK

        stack<char>st;

        for(int i=0;i<s.size();i++){

            st.push(s[i]);
        }

        int i=0;

        while(!st.empty()){

            s[i]=st.top();
            i++;
            st.pop();
        }
        
        
    }
};