class Solution {
public:
    
    int maxDiff(vector<int> &v, int length){
        sort(v.begin(),v.end());
        int max_dif = v[0];
        
        for(int i=1; i<v.size(); i++){
            
            max_dif = max(max_dif, v[i]-v[i-1]);
        }
        
        max_dif = max(max_dif, length-v.back());
        return max_dif;
    }
    
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        long x = maxDiff(horizontalCuts, h);
        long y = maxDiff(verticalCuts, w);
        
        long ans = (x*y) % 1000000007;
        
        return ans;
        
    }
};
