class Solution {
public:
    
    vector<long long int> ans;
    map<long long int,long long int> mp;
    void dec(long long int n){
        if(n>2123366400) return;
        mp[n]++;
        if(mp[n]==1) ans.push_back(n);
        else return;
        dec(n*2);
        dec(n*3);
        dec(n*5);
    }
    
    int nthUglyNumber(int n) {
        
        dec(1);
        sort(ans.begin(),ans.end());
      //  for(int i=0;i<1000; i++) cout << ans[i] << " ";
        return ans[n-1];
    }
};