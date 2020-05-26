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
#define MAX 60
typedef long long int lli;
typedef long double ld;
const double PI = acos(-1.0);
ld eps = 1e-9;


int main() {
	int a = 15;
	cout << "Number of one's in the number:" << __builtin_popcount(a) << endl;
	long b = 15;
	cout << "Number of one's in the number:" << __builtin_popcountl(b) << endl;
	long long c = 15;
	cout << "Number of one's in the number:" << __builtin_popcountll(c) << endl;
	long long int d = 15;
	cout << "Number of one's in the number:" << __builtin_popcountll(d) << endl;
}