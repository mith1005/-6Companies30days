class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> arr(26,0);
        // bool ans=true;
        if(s1.length()!=s2.length()){return false;}
        for(char a: s1){
            arr[a-'a']++;

        }
        for(char a:s2){
            if(arr[a-'a']==0){
                return false;
                
            }
            arr[a-'a']--;

        }
        int cnt=0;
        for(int i=0;i<s1.length();i++){

            if(s1[i]!=s2[i]){
                cnt++;
            }

cout<<cnt;
        }

        if(cnt>2)return false;

        return true;

        
    }
};