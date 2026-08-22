class Solution {
public:
    bool checkDivisibility(int n) {

        int sum=0;
        int pro=1;
        int rem;
        int key=n;

        while(n){

            rem=n%10;
            pro=pro*rem;
            sum+=rem;
            n=n/10;
        }

        return key%(sum+pro)==0;
        
    }
};