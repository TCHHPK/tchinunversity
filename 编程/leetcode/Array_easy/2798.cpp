class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        sort(hours.begin(),hours.end());
        int cnt=0;
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                cnt++;
            }
        }
        return cnt;
    }
};