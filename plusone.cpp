class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> ans;
        int last=1;
        for(int i=n-1;i>=0;i--){
            if(digits[i]==9){
                if(last==0){
                    ans.push_back(9);
                    continue;
                }
                ans.push_back(0);
                last=1;
            }
            else{
                ans.push_back(digits[i]+last);
                last=0;
            }
        }
        if(last>0) ans.push_back(last);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};