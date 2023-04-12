#include <bits/stdc++.h>
using namespace std;

/* functions */

#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define SQ(a) (a)*(a)
#define rep(i,a,b) for (int i=a; i<b; i++)
#define crep(i,a,b) for (int i=a; i<=b; i++)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

/* types */

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* utils */

void yes() {cout<<"YES\n";}
void no() {cout<<"NO\n";}


int count(int n) {
	if (n==1 || n==2) return 0;

	int c = -2, x;
	(n%2)?x=n:x=(n-1);
	for (int i=3; i<=x; i += 2) {
		c++;
	}
	return (n+c);
}

void solve(){
	int n;
	cin>>n;

	cout<<count(n)<<endl;
}

int main(){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		solve();
	}
	
	return 0;
}