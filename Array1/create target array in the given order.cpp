class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int size=nums.size();
        vector<int>target(size,-1);
       for(int i=0;i<size;i++){
    if (target[index[i]]!=-1) {
        for (int j = size-1; j >index[i] ; j--) {
            target[j]=target[j-1];
        }
        target[index[i]]=nums[i];
    }
    else
    {
        target[index[i]]=nums[i];
    }
   }
        return target;
    }
};