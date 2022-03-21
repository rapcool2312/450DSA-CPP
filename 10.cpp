class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Method 1
        // sort(nums.begin(),nums.end());
        // int N = nums.size();
        // int res = 0;
        // for(int i=0;i<N;i++){
        //     if(nums[i] == nums[i+1]){
        //         res = nums[i];
        //     }   
        // }
        // return res ;
        
        //Method 2
        int N = nums.size();
        map<int ,int> count;
        
        for(int i=0;i<N;i++){
            count[nums[i]]++;
        }
        
        int res = 0;
        for(auto it:count){
            if(it.second > 1){
                res= it.first;
            }
        }
        return res;
    }
};