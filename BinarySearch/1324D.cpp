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
#define MAX 200005
typedef long long int lli;
typedef long double ld;
const double PI = acos(-1.0);
ld eps = 1e-9;

// Codeforces 1324D
int main() {
	optimizar_io
 
	int n;
	cin >> n;
	vector<lli> a(n), b(n), c(n);
	fore(i, 0, n) cin >> a[i];
	fore(i, 0, n) cin >> b[i];
	fore(i, 0, n) c[i] = a[i] - b[i];
	sort(c.begin(), c.end());

	lli ans = 0;
	fore(i, 0, n){
		if(c[i] > 0) {
			vector<lli>::iterator low;
		    low = std::lower_bound(c.begin(), c.end(), (-1*c[i])+1);
		    if(low != c.end()) {
		    	ans += i - int(low - c.begin());
		    }
		}
	}
	cout << ans << endl;
}