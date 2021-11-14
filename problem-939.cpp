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
vector<string> nodes(15);
vector<vector<bool>> visited(15,vector<bool>(15, 0));
int xx[] = {0,1,0,-1};
int yy[] = {1,0,-1,0};

void solve(){
	for(int i=0;i<15;i++)for(int j=0;j<15;j++) nodes[i][j] = 'R';
	pi b,l;
	for(int i=1;i<=10;i++)for(int j=1;j<=10;j++){
		char ch;
		cin>>ch;
		nodes[i][j] = ch;
		if(ch=='B')b={i,j};
		if(ch=='L')l={i,j};
	}
	queue<ti> q;
	q.push(mt(b.F,b.S,0));
	visited[b.F][b.S] = true;
	while(true){
		int x,y,d;
		tie(x,y,d) = q.front();
		q.pop();
		if(nodes[x][y] == 'L'){
			cout<<d-1<<endl;
			return;
		}
		for(int i=0;i<4;i++){
			if(nodes[x+xx[i]][y+yy[i]]!='R'&&!visited[x+xx[i]][y+yy[i]]){
				visited[x+xx[i]][y+yy[i]] = true;
				q.push(mt(x+xx[i], y+yy[i], d+1));
			}
		}
	}
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);
	///////////////////////////////////////////////
	solve();
	return 0;
}
