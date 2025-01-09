class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            int temp=words[i].find(pref);
            if(temp==0)ans++; 

        }
        return ans;
    }
};