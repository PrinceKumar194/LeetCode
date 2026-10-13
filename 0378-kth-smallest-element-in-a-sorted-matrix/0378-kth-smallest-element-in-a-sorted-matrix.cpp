class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        priority_queue<int, vector<int>, greater<int>> p;

        for(int i=0;i<matrix.size();i++){

            for(int j=0;j<matrix[i].size();j++){
                p.push(matrix[i][j]);
            }
        }

    int i=1;
        while(i<k){

            int temp=p.top();
            p.pop();
            i++;
        }

        return p.top();
        
    }
};