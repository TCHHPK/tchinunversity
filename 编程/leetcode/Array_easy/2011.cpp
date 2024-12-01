class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i][0]=='X'){
                if(operations[i][1]=='+'){
                    cnt++;
                }else{
                    cnt--;
                }
            }
            else if(operations[i][0]==operations[i][1]){
                if(operations[i][1]=='+'){
                    cnt++;
                }else{
                    cnt--;
                }
            }
        }
        return cnt;
    }
};