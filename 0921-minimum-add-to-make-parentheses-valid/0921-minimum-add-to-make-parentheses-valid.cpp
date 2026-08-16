class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<char>n;

        int count=0;

        for(int i=0;i<s.size();i++){

            if(s[i]=='('){
                n.push(s[i]);
            }
            else{

                if(n.empty()){
                    count++;
                }

                else{
                    n.pop();
                }
            }
        }

        return n.size()+count;
        
    }
};