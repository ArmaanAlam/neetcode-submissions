class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        arr[0] = nums[0];
        int ans = nums[0];

        for(int i = 1; i < n; i++){
            arr[i] = max(arr[i-1] + nums[i], nums[i]);
            ans = max(ans, arr[i]);
        }

        return ans;
    }
};
