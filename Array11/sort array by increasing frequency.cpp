class Solution {
public:
    std::vector<int> frequencySort(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    auto comparator = [&freq](int a, int b) {
        if (freq[a] == freq[b]) {
            return a > b;
        }
        return freq[a] < freq[b];
    };

    std::sort(nums.begin(), nums.end(), comparator);

    return nums;
    }
};