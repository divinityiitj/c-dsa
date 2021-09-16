 int search(vector<int>& nums, int target) {
        int s=0;int e=nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            //left side i sorted
            if(nums[s]<=nums[mid] ){
                if(target>=nums[s] && target<=nums[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1; //if the arr is sorted but target doesnt lie there so we go to                             other half 
                }
            }
            if(nums[mid]<=nums[e]){
                if(target>=nums[mid] && target<= nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
