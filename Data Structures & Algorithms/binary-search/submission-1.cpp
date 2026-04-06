class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1, mid=(end-start)/2+start;
        while(start<=end){
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) start=mid+1;
            else end=mid-1;
        mid=(end-start)/2+start;
        }
    return -1;
    }
};
