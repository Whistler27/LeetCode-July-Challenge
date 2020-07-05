class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0;
        for(int i=0;i<32; i++){
            int l=(x&(1<<i));
            int r=(y&(1<<i));
            if(l!=r) ans++;
        }
        return ans;
    }
    
};