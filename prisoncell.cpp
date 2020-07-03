class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<vector<int>> ans(64);
        map<vector<int>,int> mp;
        mp.clear();
        int size=0;
        for(int i=0;i<100;i++){
            vector<int> v;
            v.clear();
            v.push_back(0);
            for(int j=1;j<7; j++){
                if(cells[j-1]==cells[j+1]) v.push_back(1);
                else v.push_back(0);
              
            }
            v.push_back(0);
            if(mp[v]==0){
                mp[v]++;
                size++;
                ans[i]=v;
            }
            cells=v;
        }
        
        N=N%size;
       
        if(N==0) N=size-1;
        else N--;
       //cout << size << " ";
        return ans[N];
        
        
    }
};