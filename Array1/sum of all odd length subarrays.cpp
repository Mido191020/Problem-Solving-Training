class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
    int n = arr.size();

    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; end += 2) {
          
            for (int i = start; i <= end; ++i) {
                sum += arr[i];
            }
        }
    }

    return sum;
    }
};