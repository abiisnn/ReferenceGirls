vector<lli> bit(MAX, 0);
void clean() { // O(MAX)
	for(int i = 0; i < MAX; i++) bit[i] = 0;	
}
lli F(lli a, lli b){return a + b;}

void build() {
	for(int i = 1; i < bit.size(); i++) {
		int j = i + (i & -i);
		if(j < bit.size()) bit[j] = F(bit[j], bit[i]);
	}
}
void update(int i, lli val) { // O(log(MAX))
	for(i++; i < bit.size(); i += i & -i) 
		bit[i] = F(bit[i], val);
}
lli query(int i) { // O(log(MAX))
	lli ans = 0;
	for(i++; i; i -= i & -i) ans = F(ans, bit[i]);
	return ans;
}
int main() {
	optimizar_io
	int index, k;
	update(index, k); // Sum k in index
	query(r); // Sum of [0, r]
}