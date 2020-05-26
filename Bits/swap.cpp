void swap(lli &a, lli &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}