class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
     sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;
    vector<vector<int>> result;

    for (int i = 1; i < arr.size(); ++i) {
        int diff = abs(arr[i] - arr[i - 1]);

        if (diff < minDiff) {
            minDiff = diff;
            result.clear();
            result.push_back({arr[i - 1], arr[i]});
        } else if (diff == minDiff) {
            result.push_back({arr[i - 1], arr[i]});
        }
    }

    return result;   
    }
};