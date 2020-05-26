// Return index of the first value greater or equal target
int lowerBound(vector<lli> &a, int l, int r, lli target) { // O(log(n)
	int ans = -1;
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if(a[mid] >= target) {
			ans = mid;
			r = mid - 1;
		} else l = mid + 1;
	}
	return ans;
}