class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        // vector<int>hashmap(,0);
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int totalNoTuples=0;
        for(int i=0;i<nums.size();i++){
            for(int j=n-1;j>=i+1;j--){
                
                int product=nums[i]*nums[j];

                unordered_set<int> possibleDvalues;
                for(int cindex=i+1;cindex<j;cindex++){
                    if(product%nums[cindex]==0){
                        int dvalue=product/nums[cindex];

                        if(possibleDvalues.find(dvalue)!=possibleDvalues.end()){
                            totalNoTuples+=8;
                        }
                        possibleDvalues.insert(nums[cindex]);
                    }


                }

            }
        }
        return totalNoTuples;
        
    }
};