// MEX: Minimum Excluded Value
int MEX(set<int> st) { // O(|st| * log(|st|))
	for(int i = 0;; i++) {
		if(!st.count(i))
			return i;
	}
}