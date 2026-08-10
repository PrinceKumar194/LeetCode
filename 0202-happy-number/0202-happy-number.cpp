class Solution {
public:
    bool isHappy(int n) {

        
        int rem;


       while(n!=1 &&n!=4){

            int sum=0;

            while(n){

                rem=n%10;

                sum=sum+rem*rem;

            
                n=n/10;
            }
            n=sum;
        }
       return n==1;
        
    }
};