class Solution {
public:
    void findCombinations(int index,int target,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        int n=arr.size();
        if(target==0){
          ans.push_back(ds);
          return;
        }
        for(int i=index;i<n;i++){
           if(i>index && arr[i]==arr[i-1]) continue;
           if(arr[i]>target) break;
           ds.push_back(arr[i]);
           findCombinations(i+1,target-arr[i],arr,ds,ans);
           ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> answer;
        vector<int> ds;
        findCombinations(0,target,candidates,ds,answer);
        return answer;
    }
};