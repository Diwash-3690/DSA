class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> result;
        for(int i=0;i<n;i++){
            int ans=nums[i];
            int targethead=target-ans;
            if(result.find(targethead)!=result.end()){
                return {result[targethead],i};
            }
            result[ans]=i;

        }
        return {-1,-1};
        
    }
};