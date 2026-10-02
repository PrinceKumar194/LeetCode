class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int max=INT_MIN;
        int smax=INT_MIN;
        int small=INT_MAX;
        int ssmall=INT_MAX;

        for(int i=0;i<nums.size();i++){

            if(nums[i]>max){
                smax=max;
                max=nums[i];
            }
            else if(nums[i]>smax){
                smax=nums[i];
            }

            if(nums[i]<small){
                ssmall=small;
                small=nums[i];
            }
            else if(nums[i]<ssmall){
                ssmall=nums[i];
            }
        }

        return (long long)max * smax - (long long)small * ssmall;
        
    }
};