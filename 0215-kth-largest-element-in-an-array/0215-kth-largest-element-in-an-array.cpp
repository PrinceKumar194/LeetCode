class Solution {
public:

    void heapify(vector<int>&arr,int index,int n){

        int smallest=index;
        int left=2*index+1;
        int right=2*index+2;

        if(left<n && arr[left]>arr[smallest]){
            smallest=left;
        }

        if(right<n && arr[right]>arr[smallest]){
            smallest=right;
        }

        if(smallest!=index){
            swap(arr[index],arr[smallest]);
            heapify(arr,smallest,n);
        }
    }

    void minHeap(vector<int>&arr,int n){

        for(int i=n/2-1;i>=0;i--){

            heapify(arr,i,n);
        }
    }

    void del(vector<int>&arr,int n){

        for(int i=n-1;i>0;i--){

            swap(arr[i],arr[0]);
            heapify(arr,0,i);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        
        minHeap(nums,nums.size());
        del(nums,nums.size());

        return nums[nums.size()-k];
    }
};