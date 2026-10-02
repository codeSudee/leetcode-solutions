class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX;
        int second = INT_MAX;

        for(int i = 0;i<nums.size();i++){
            if(nums[i]<=smallest){
                smallest=nums[i];
            }
            else if(nums[i]<=second){
                second=nums[i];
            }   
            else {
                return true;
            }   
        
        }
        return false;
    }
};