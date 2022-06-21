#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
#define fore(i, a, b) for(int i = a; i < b; i++)
#define fori(i, a, b) for(int i = a; i <= b; i++)
#define pb push_back
#define popb pop_back
#define mk make_pair
#define fi first
#define se second
#define endl '\n'
#define MAX 100000
typedef long long int lli;
typedef long double ld;
const double PI = acos(-1.0);
ld eps = 1e-9;
 
vector<lli> a(MAX);
lli gauss(lli n) { return (n * (n+1)) / 2; }
lli cards(lli n) { return (2 * gauss(n)) + (gauss(n-1)); }

lli solve(lli n) {
	lli cont = 0;
	while(n >= 2) {
		int find = binary(n);
		if(find != -1) {
			n -= a[find];
			cont++;
		} else break;
	}
	return cont;	
}
 
int main() {
	optimizar_io
	for(lli i = 0; i < MAX; i++) a[i] = cards(i);
 
	int t;
	lli n;
	cin >> t;
	while(t--) {
		cin >> n;
		cout << solve(n) << endl;;
	}
}