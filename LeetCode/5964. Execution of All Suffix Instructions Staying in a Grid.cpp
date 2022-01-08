static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();

class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m = s.length();
        vector<int> result(m);
        for(int m1 = 0; m1 < m; m1++){
            int x = startPos[0], y = startPos[1];
            int count = 0;
            for(int i = 0; i < m; i++){
                if(s[i] == 'U'){
                    if(x == 0)  break;
                    x--;
                }
                if(s[i] == 'L'){
                    if(y == 0) break;
                    y--;
                }
                if(s[i] == 'D'){
                    if(x == n-1)    break;
                    x++;
                }
                if(s[i] == 'R'){
                    if(y == n-1) break;
                    y++;
                }
                count++;
            }

            result[m1] = count;
        }

        return result;
    }
};