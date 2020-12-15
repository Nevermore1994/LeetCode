    void nextPermutation(vector<int>& nums) {
        int index = nums.size() - 2;
        while(index >= 0 && nums[index] >= nums[index + 1]){
            index --;
        }
        if(index >= 0){
            int i = nums.size() - 1;
            while(i >= 0 && nums[index] >= nums[i]){
                i--;
            }
            swap(nums[index], nums[i]);
        }
        reverse(nums.begin() + index + 1, nums.end());
    }