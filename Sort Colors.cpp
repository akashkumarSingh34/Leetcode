void sortColors(vector<int>& nums) {
        for(int i =0; i<nums.size(); i++)
            for(int j=0; j<i;j++)
                if(nums[i]<nums[j]){
                    int temp =nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;   
                }
    }
