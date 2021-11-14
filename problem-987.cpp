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
	int n,k;
	cin>>n>>k;

	int current = 0;
	bool first = true;
	while(n--){
		string s;
		cin>>s;
		current+=s.length();
		if(current>k){
			cout<<endl;
			current = s.length();
			cout<<s;
		}
		else{
			if(!first)cout<<" ";
			first = false;
			cout<<s;
		}
	}
	cout<<endl;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	///////////////////////////////////////////////
	solve();
	return 0;
}
