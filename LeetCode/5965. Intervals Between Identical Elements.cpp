static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();

class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        vector<long long> result(arr.size());

        unordered_map<int, vector<int>> mp;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]].push_back(i);
        }      
        
        for(auto it:mp){
            vector<int> b = it.second;
            vector<long long> left(b.size());
            vector<long long> right(b.size());

            for(int i = 1;i<b.size();i++){
                left[i] = left[i-1] + (long long)((long long)i*(long long)(b[i] - b[i-1]));
            }
            
            for(int i = b.size()-2;i>=0;i--){
                right[i] = right[i-1] + (long long)((long long)(b.size()-i-1)*(long long)(b[i+1] - b[i]));
            }

            for(int i = 0; i<b.size();i++){
                result[(long long)b[i]] = left[i] + right[i];
            }
        }

        return result;
    }
};