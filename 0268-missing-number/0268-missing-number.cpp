class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum1=0;
        int sum2=0;

        for(int i=1;i<=nums.size();i++){

            sum1+=i;
            
        }

        for(int j=0;j<nums.size();j++){

            sum2+=nums[j];
        }

        return sum1-sum2;

        
    }
};