#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define v vector<ll>
#define loop(i,a,b) for(ll i = a; i < b; i++)
#define looprev(i,a,b) for(ll i = a-1; i >=b; i--)
// void file_i_o()
// {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	cout.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }
void helper1(ll h, vector<ll> & arr)
{

	ll index = 0, fTower = 0, count  = 0;
	while (fTower < h  && index < arr.size() )
	{
		ll t = -1;
		fTower += arr[index];
		if (fTower >= h ) {
			index++;
			break;
		}
		ll j = index + 1;
		while (arr[j] >= (h - fTower)  && j < arr.size())
		{
			t = 1;
			j++;
		}
		if (t == 1)
		{	swap(arr[index + 1], arr[--j]);
			fTower += arr[index + 1];
		}
		else
			fTower += arr[index + 1];
		index += 2;
	}

	ll sTower = 0;
	while ( sTower < h && index < arr.size() )
	{
		ll t = -1;
		sTower += arr[index];
		if ( sTower >= h ) {
			index++;
			break;
		}
		ll j = index + 1;
		while (arr[j] >= (h - sTower) && j < arr.size())
		{
			t = 1;
			j++;
		}
		if (t == 1)
		{	swap(arr[index + 1], arr[--j]);
			sTower += arr[index + 1];
		}
		else
		{sTower += arr[index + 1];}

		index += 2;
	}
	log(index);
}

bool helper(ll target, vector<ll> & arr)
{
	vector<vector<bool>>dp (arr.size() + 1, vector<bool>(target + 1, false));
	for (ll i = 0; i < dp.size(); ++i)
		dp[i][0] = true;

	ll n = arr.size();
	for (ll i = 1; i <= n ; ++i)
	{
		for (ll j = 1; j <= target; ++j)
		{
			if (j >= arr[i - 1])
			{
				dp[i][j] = (dp[i - 1][j] || dp[i - 1][j - arr[i - 1]]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return dp[n][target];
}

void solve()
{
	ll n, h;
	cin >> n >> h;
	vector<ll> arr(n);
	for (auto &i : arr)
		cin >> i;
	ll sum = accumulate(arr.begin(), arr.end() , 0);
	sort(arr.rbegin(), arr.rend());
	if (sum < (h * 2))
	{	log(-1)
		return;
	}
	else if ( arr[0] > h)
	{
		helper1( h, arr);
		return;

	}
	else
	{
		ll index = 0;
		ll sum = 0;
		vector<ll> arr1;
		while (index < n && sum < (h * 2))
		{
			arr1.push_back(arr[index]);
			sum += arr[index++];
		}
		// log(sum);
		bool flag1 = helper(h , arr1);
		while (index < n)
		{
			if (flag1 == true) {
				log(index);
				return;
			}
			else if (flag1 == false)
			{
				// log("Hello")
				arr1.push_back(arr[index++]);
				ll i;
				loop( i, 0, arr1.size())
				log(arr1[i]);
				flag1 = helper(h , arr1);
			}

		}
		if (flag1 == false) {
			log(-1);
		}
		else {
			log(index);
		}
	}

}



int main()
{
	// file_i_o();
	ll t = 1, i = 0;
	cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}