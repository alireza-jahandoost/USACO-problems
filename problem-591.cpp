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
	int a,aa,b,bb,c,cc,d,dd;
	cin>>a>>aa>>b>>bb>>c>>cc>>d>>dd;

	int p = max(0ll, dd-d);
	int g = max(0ll, cc-c);
	if(p==0) g = max(0ll, g-(dd-d));
	if(c-cc<p)g += (p-max(0ll, c-cc));
	int s = max(0ll, bb-b);
	if(g==0) s = max(0ll, s-(cc-c));
	if(b-bb<g)s += (g-max(0ll, b-bb));
	cout<<s<<endl<<g<<endl<<p<<endl;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
	///////////////////////////////////////////////
	solve();
	return 0;
}
