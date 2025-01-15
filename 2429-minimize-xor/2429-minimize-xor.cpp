class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int result=num1;
        int target1cnt= __builtin_popcount(num2);
        int set1cnt= __builtin_popcount(result);
        int curr=0;
        while(set1cnt<target1cnt){
            if(!isSet(result,curr)){
                setBit(result, curr);
                set1cnt++;

            }
            curr++;
        }

        while(set1cnt>target1cnt){
            if(isSet(result,curr)){
                unsetBit(result,curr);
                set1cnt--;
            }
            curr++;
        }
        return result;

        
    }
    private:
    bool isSet(int x, int bit) { return x & (1 << bit); }
    void setBit(int &x, int bit) { x |= (1 << bit); }
    void unsetBit(int &x, int bit) { x &= ~(1 << bit); }
};