class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int n=s.size();
        string cur="";
        for(int i=0;i<n; i++){
            if(s[i]!=' '){
                cur+=s[i];
            }
            else{
                if(cur!=" " && cur!=""){
                    v.push_back(cur);
                    cur="";
                }
                cur="";
            }
        }
        
        if(cur!=" " && cur!="") v.push_back(cur);
        if(v.size()==0) return "";
        string ans;
        for(int i=v.size()-1;i>=1;i--) ans+=v[i],ans+=" ";
        ans+=v[0];
        return ans;
        
    }
};