lli query(int i) { // O(log(N))
	lli ans = 0;
	for(i++; i; i -= i & -i) ans = F(ans, bit[i]);
	return ans;
}