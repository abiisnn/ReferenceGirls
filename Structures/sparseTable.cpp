/* Sparse table that give you the greater
	number in a range. 					*/
int func(int a, int b) {
	int ans;
	if(a > b) ans = a;
	else ans = b;
	return ans;
}
void sparseTable(vector<int> &n) {
	fore(i, 0, n.size())
		dp[i][0] = n[i];

	for(int j = 1; (1 << j) <= n.size(); j++) {
		for(int i = 0; (i + (1 << j) - 1) < n.size(); i++) {
			dp[i][j] = func(dp[i][j - 1], dp[i + (1 << (j - 1))][j - 1]);
		}
	}
}
int query(int l, int r) {
	int j = (int)log2(r - l + 1);
	int ans = dp[r - (1 << j) + 1][j];
	if(dp[l][j] > ans) ans = dp[l][j];
	return ans;
}