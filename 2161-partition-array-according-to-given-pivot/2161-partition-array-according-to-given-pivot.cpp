class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> nums1;
        vector<int> nums2;
        int cnt=0;
        
       
        for(int ele: nums){
            if(ele<pivot){
                nums1.push_back(ele);

            }
            else if(ele>pivot){
                 nums2.push_back(ele);

            }
            else{
                cnt++;
            }
        }
        while(cnt--){
            nums1.push_back(pivot);


        }
        int n2=nums2.size();
        for(int i=0;i<n2;i++){

            nums1.push_back(nums2[i]);


        }


        return nums1;
        
        
    }
};