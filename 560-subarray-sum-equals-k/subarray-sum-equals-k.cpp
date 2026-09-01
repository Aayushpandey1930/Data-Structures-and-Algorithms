class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        // BruteForce ..............

        // int n = nums.size();
        // int count = 0;
        // for(int i = 0 ;i< n; i++){
        //     for(int j = i; j<n ; j++){
        //         int sum =0;
        //         for(int s = i; s<= j ;s++){
        //             sum += nums[s];
        //         }
        //         if(sum == k) count++;
        //     }
        // }
        // return count;

        // PrefixSum Method:...................

        unordered_map<int,int> mpp;
        mpp[0] = 1;

        int prefix = 0;
        int count = 0;

        for(auto x : nums){
            prefix += x;

            int required = prefix - k;
            if(mpp.find(required) != mpp.end()){
                count += mpp[required];
            }
            mpp[prefix]++;
        }
        return count;
    }
};