int findFirstValueGEx(lli l, lli r, lli x, vector<lli> &a) {
	lli ans = -1;
	while(l <= r) {
		mid = l + (r - l) / 2;
		if(a[mid] >= x) {
			ans = mid;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return ans;
}