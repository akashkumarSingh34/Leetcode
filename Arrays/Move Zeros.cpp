    void moveZeroes(vector<int>& nums) {
        for(int i = nums.size()-1; i>=0; i--){
            if(nums[i]==0 && i<nums.size()-1){
                nums.erase(nums.begin()+i);
                nums.insert(nums.end(),0);
            }
        }
    }
