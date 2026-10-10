class Solution {
public:

    void heapify(vector<int>&arr,int index,int n){

        int largest=index;
        int left=2*index+1;
        int right=2*index+2;

        if(left<n && arr[left]>arr[largest]){
            largest=left;
        }

        if(right<n && arr[right]>arr[largest]){
            largest=right;
        }

        if(largest!=index){
            swap(arr[index],arr[largest]);
            heapify(arr,largest,n);
        }
    }

    void maxHeap(vector<int>&arr,int n){

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
        
        maxHeap(nums,nums.size());
        del(nums,nums.size());

        return nums[nums.size()-k];
    }
};