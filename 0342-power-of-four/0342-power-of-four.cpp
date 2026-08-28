class Solution {
public:
    bool isPowerOfFour(int n) {

        int k=n;
        int rem=0;

        if(n==1){
            return true;
        }
        else if(n<=0){
            return false;
        }

        while(n%4==0){
            n=n/4;
        }

        if(n==1){
            return true;
        }
        else{
            return false;
        }
        
    }
};