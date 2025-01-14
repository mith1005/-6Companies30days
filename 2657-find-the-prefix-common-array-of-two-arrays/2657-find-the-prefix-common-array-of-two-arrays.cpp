class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> prefixarr(n), freq(n+1,0);
        int commcnt=0;

        for(int i=0;i<n;i++){

            if(++freq[A[i]]==2)commcnt++;
            if(++freq[B[i]]==2)commcnt++;
            prefixarr[i]=commcnt;

        }
        return prefixarr;


        
    }
};