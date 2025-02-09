class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long cnt=0;
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++){
             cnt+=i-map[i-nums[i]];
             map[i-nums[i]]++;

        }
        return cnt;
        
    }
};