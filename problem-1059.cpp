#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////////////
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
//////////////////////////////////////////
#define endl '\n'
#define pb push_back
#define gg exit(0)
#define inf 2147483647
#define linf 9223372036854775807LL
#define pi pair<int,int>
#define pll pair<ll,ll>
#define ti tuple<int,int,int>
#define mp make_pair
#define mt make_tuple
#define vi vector<int>
#define vb vector<bool>
#define vpi vector<pi>
#define vpll vector<pll>
#define vll vector<ll>
#define vti  vector<ti>
#define vvi vector<vi>
#define F first
#define S second
#define tcase int tttttt;cin>>tttttt;while(tttttt--)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define mod ((int)1e9+7)

#define int long long
#define ld long double
#define PI 3.14159265359
/////////////////////////////////////////
///////////////functions/////////////////


void solve(){
	vi nums(7);
	for(int i=0;i<7;i++) cin>>nums[i];
	for(int i=0;i<(1<<7);i++){
		if(__builtin_popcount(i)!=3)continue;
		vi current;
		multiset<int> s;
		for(int j=0;j<7;j++)s.insert(nums[j]);
		for(int j=0;j<10;j++)if(i&(1<<j))s.erase(s.find(nums[j])), current.pb(nums[j]);
		if(s.count(current[0]+current[1]))s.erase(s.find(current[0]+current[1]));
		if(s.count(current[0]+current[2]))s.erase(s.find(current[0]+current[2]));
		if(s.count(current[1]+current[2]))s.erase(s.find(current[1]+current[2]));
		if(s.count(current[0]+current[1]+current[2]))s.erase(s.find(current[0]+current[1]+current[2]));
		sort(all(current));
		if(s.empty())cout<<current[0]<<" "<<current[1]<<" "<<current[2]<<endl;
	}
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("promote.in", "r", stdin);
	//freopen("promote.out", "w", stdout);
	///////////////////////////////////////////////
	solve();
	return 0;
}
