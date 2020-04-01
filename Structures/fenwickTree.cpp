vector<lli> bit(MAX, 0);
void clean() { // Clean vector every time has been used.
	for(int i = 0; i < MAX; i++) bit[i] = 0;	
}
lli F(lli a, lli b){return a + b;}
void build() { // O(N)
	for(int i = 1; i < bit.size(); i++) {
		int j = i + (i & -i);
		if(j < bit.size()) bit[j] = F(bit[j], bit[i]);
	}
}
void update(int i, lli val) { // O(log(N))
	for(i++; i < bit.size(); i += i & -i) 
		bit[i] = F(bit[i], val);
}
lli query(int i) { // O(log(N))
	lli ans = 0;
	for(i++; i; i -= i & -i) ans = F(ans, bit[i]);
	return ans;
}