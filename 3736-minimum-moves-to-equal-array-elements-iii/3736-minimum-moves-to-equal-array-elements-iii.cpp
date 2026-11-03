class Solution {
public:
    int minMoves(vector<int>& nums) {

        int max=*max_element(nums.begin(),nums.end());

        sort(nums.begin(),nums.end());

        int count=0;

        for(int i=0;i<nums.size()-1;i++){

            count=count+max-nums[i];
        }
        return count;
    }
};