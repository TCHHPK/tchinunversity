class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int cnt;
        for(int i=0;i<nums.size();i++){
            cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};