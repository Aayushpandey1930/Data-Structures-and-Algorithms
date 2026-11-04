class Solution {
public:

    // Method quick sort.....
    // TLE..............

    // int parition(vector<int>& nums,int low, int high){
    //     int pivot = nums[high];
    //     int i = low - 1;
    //     for(int j = low; j < high; j++){
    //         if(nums[j] <= pivot){
    //             i = i+1;
    //             swap(nums[i], nums[j]);
    //         }
    //     }swap(nums[i+1], nums[high]);
    //     return i+1;
    // }
    // void qiucksort(vector<int>& nums,int low, int high){
    //      if(low < high){
    //         int pi = parition(nums,low, high);
    //         qiucksort(nums,low,pi-1);
    //         qiucksort(nums,pi+1,high);
    //     }
    // }


    void Merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp;
        int i = low; 
        int j = mid +1;
        while(i <= mid && j <= high){
            if(nums[i] <= nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i <= mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j <= high){
            temp.push_back(nums[j]);
            j++;
        }
        for(int k = 0; k < temp.size(); k++){
            nums[low+k] = temp[k];
        }
    }
    void Merge_sort(vector<int>& nums, int low, int high){
        if(low >= high){
            return;
        }
        int mid = low + (high - low)/2;
        Merge_sort(nums,low, mid);
        Merge_sort(nums, mid+1, high);
        Merge(nums,low, mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        // qiucksort(nums,0,nums.size()-1);
        Merge_sort(nums, 0, nums.size()-1);
        return nums;
    }
};