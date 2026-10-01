class Solution {
public:
    int maxProduct(vector<int>& nums) {

        // int max=INT_MIN;
        // int smax=INT_MIN;

        // for(int i=0;i<nums.size();i++){

        //     if(nums[i]>max){
        //         smax=max;
        //         max=nums[i];
        //     }
        //     else if(nums[i]>smax){
        //         smax=nums[i];
        //     }
        // }

        // return (max-1)*(smax-1);

        // SECOND METHOD


        sort(nums.begin(),nums.end());

        int product=(nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);

        return product;
        
    }
};