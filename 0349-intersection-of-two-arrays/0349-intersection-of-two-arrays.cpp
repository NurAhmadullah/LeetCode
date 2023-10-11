class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        unordered_map<int,bool>mp;
        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]] = true;
        }

        vector<int> result;
        for(int i=0; i<nums2.size(); i++){
            if(mp[nums2[i]]){
                if(result.size() > 0){
                    if(result.back() != nums2[i]){
                        result.push_back(nums2[i]);
                    }
                }
                else{
                    result.push_back(nums2[i]);
                }
            }
        }

        return result;
    }
};