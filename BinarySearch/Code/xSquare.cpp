// Return: return m if m * m = target
lli isSquare(lli x) { // O(log(x))
	lli l = 0, r = x - 1;
	while(l <= r) {
		lli mid = l + (r - l) / 2;
		lli m = mid * mid;
		if(m == x) return mid;
		if(m > x) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}