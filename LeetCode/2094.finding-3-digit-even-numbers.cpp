/*
 * @lc app=leetcode id=2094 lang=cpp
 *
 * [2094] Finding 3-Digit Even Numbers
 */

// @lc code=start
static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>  count(10, 0 );
        for(int i:digits) { count[i]++;}

        vector<int> res;

        for(int num=100;num<999;num+=2){
            vector<int> currCount(10, 0);

            int temp = num;

            while(temp){
                currCount[temp%10]++;
                temp /= 10;
            }

            bool flag = true;
            for(int i=0;i<10;i++)   {
                if(currCount[i] > count[i]){
                    flag = false;
                    break;
                }
            }

            if(flag)    res.push_back(num);
        }
        return res;
    }
};
// @lc code=end

