class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1)return true;
        int i=0,j=1;
        bool a=true;
        while(j< nums.size()){
            if(nums[i]%2==nums[j]%2){
                a=false;
                break;
            }


            i++;
            j++;
        }
        return a;
        
    }
};