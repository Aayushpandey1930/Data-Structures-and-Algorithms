class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());

        //  for(int i = 0;  i < nums.size(); i++ ){
        //     bool swapped = false;
        //     for(int j = 0; j < nums.size()-i-1; j++){
        //         if(nums[j] >= nums[j+1]){
        //             swap(nums[j] , nums[j+1]);
        //             swapped = true;
        //         }
        //     }
        //     if(!swapped)
        //     break;
        //  }
        
        int n = nums.size();
        int noo = 0 , no1 = 0, no2 = 0 ;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0) noo++;
            else if (nums[i] == 1) no1++;
            else  no2++ ;
        }
        for(int i = 0; i < n; i++){
            if(i < noo) nums[i] = 0;
            else if(i < (noo+no1)) nums[i] = 1;
            else nums[i] = 2;
        }
        return;
    }
};