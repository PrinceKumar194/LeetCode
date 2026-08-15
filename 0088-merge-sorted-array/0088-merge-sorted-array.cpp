class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(n==0){
            return;
        }
        else if(nums1[0]==0){
            nums1[0]==nums2[0];
        }

        int j=0;

        for(int i=0;i<m+n;i++){

            if(nums1[i]==0){
                nums1[i]=nums2[j];
                j++;

                if(j==n){
                    sort(nums1.begin(),nums1.end());
                    return; 
                }
            }


        }

        
        
    }
};