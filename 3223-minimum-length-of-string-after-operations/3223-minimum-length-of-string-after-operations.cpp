class Solution {
public:
    int minimumLength(string s) {
        vector<int>arr(26,0);
        int sum=0;
        for(char i: s){
            arr[i-'a']++;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0 &&arr[i]>=2) arr[i]=2;
            else if(arr[i]%2==1 && arr[i]>=1)arr[i]=1;

        }
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];

        }
        return sum;
        
    }
};