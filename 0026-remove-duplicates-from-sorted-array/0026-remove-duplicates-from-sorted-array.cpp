class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int j=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[j-1]){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return j;
    }
};