class Solution {
    public int[] minOperations(String boxes) {
        int len = boxes.length();
        int[] ops = new int[len];

        for (int i = 1, count = 0; i < len; ++i) {
            if (boxes.charAt(i - 1) == '1') {
                ++count;
            }
            ops[i] = ops[i - 1] + count;
        }
      
        for (int i = len - 2, count = 0, sum = 0; i >= 0; --i) {
            if (boxes.charAt(i + 1) == '1') {
                ++count;
            }
            sum += count;
            ops[i] += sum;
        }

        return ops;
    }
}