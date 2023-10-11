class Solution {
public:
    int countNicePairs(vector<int>& nums) {

        /*
        --- in this solution, converted the equation like follwong
            '''
            nums[i] - rev(nums[i]) == nums[j] - rev(nums[j])
            '''
        */

        unordered_map<int,int> mp;

        long long result = 0;
        int x, rev;

        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            x = num;
            rev = 0;
            while(x!=0){
                rev = rev * 10 + (x % 10);
                x = x / 10;
            }
            if(mp[num - rev] > 0){
                result += mp[num - rev];
                if(result >= 1000000007){
                    result = result % 1000000007;
                }
            }
            mp[num - rev]++;
        }
        return result;
    }
};