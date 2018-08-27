bool canJump(vector<int>& nums) {
        int next, current;
        next = nums[0];
        current = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (next < i) return false;
            if(next >=nums.size()) return true;
            if (i + nums[i] > next) next = i + nums[i];
            
        }
        return true;
    }