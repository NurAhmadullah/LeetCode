class Solution {
public:

    int bin_search(vector<int>& nums, int target){

        int lo = 0;
        int hi = nums.size() - 1;
        int mid;
        int index = -1;
        
        while(lo <= hi){
            mid = lo + (hi - lo)/2;
            if(nums[mid] <= target){
                index = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        return index;
    }

    int triangleNumber(vector<int>& nums) {

        if(nums.size() < 3){
            return 0;
        }

        int result = 0;

        sort(nums.begin(), nums.end());
        int firstTwo = 0,idx,dif;

        for(int i=0; i<nums.size()-2; i++){
            for(int j =i+1; j<nums.size()-1; j++){
                firstTwo = nums[i] + nums[j];
                idx = bin_search(nums,firstTwo-1);
                dif = idx - j;
                if(dif>0){
                    result += dif;
                }
            }
        }

        return result;
    }
};