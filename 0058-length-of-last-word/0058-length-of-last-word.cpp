class Solution {
public:
    int lengthOfLastWord(string s) {

        // removing space form beginning and end of string; 

        s=s.substr(
        s.find_first_not_of(' '),
        s.find_last_not_of(' ') - s.find_first_not_of(' ') + 1
        );

        int n=s.size();
        int count=0;

        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                break;
            }

            count++;
        }

        return count;
        
    }
};