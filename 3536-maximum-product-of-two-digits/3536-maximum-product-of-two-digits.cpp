class Solution {
public:
    int maxProduct(int n) {

        int num1=0;
        int num2=0;
        int rem;

        int l=0;

        while(n){

            rem=n%10;
            
            if(rem>num1){
                num2=num1;
                num1=rem;
            }
            else if(rem>num2){
                num2=rem;
            }

            n=n/10;

        }
        return num1*num2;
        
    }
};