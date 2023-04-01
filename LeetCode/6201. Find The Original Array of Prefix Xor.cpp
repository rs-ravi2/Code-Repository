class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> res = vector<int>(pref.size());
        int currxor = res[0];
        res[0] = pref[0];
        for(int i=1;i<res.size();i++){
            int n = currxor;
            if(n){
                int x = log2(n);
                int  m = 1 << x;
                m = m | m - 1;
                n = n ^ m;
            }
            else n=1;
            res[i] = n;
            currxor = currxor ^ res[i];
        }
        
        return res;
    }
};