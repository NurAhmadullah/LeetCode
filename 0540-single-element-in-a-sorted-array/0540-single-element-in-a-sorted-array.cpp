class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int ln = nums.size();
        if(ln <= 2){
            return nums[0];
        }
        if(nums[0] != nums[1]){     // if first one is single
            return nums[0];
        }
        if(nums[ln-1] != nums[ln-2]){   // if last one is single
            return nums[ln-1];
        }
        
        int lo = 1;
        int hi = nums.size() - 2;
        int mid;

        while(lo <= hi){
            mid = lo + (hi - lo)/2;
            if(nums[mid - 1] != nums[mid] &&
                nums[mid] != nums[mid+1]){
                    return nums[mid];
            }
            if(mid & 1){    // mid is odd
                if(nums[mid] == nums[mid+1]){     // "od-ev" go left
                    hi = mid - 1;
                }
                else{
                    lo = mid + 1;
                }
            }
            else{
                if(nums[mid] == nums[mid + 1]){   // "ev-od" go right
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }
        }
        return lo;
    }
};