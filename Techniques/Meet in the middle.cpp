int main() {
	optimizar_io
	int N; cin >> N; // Array size
	int len1 = N/2, len2 = N-N/2; 

	// Getting first Part
	for(int mask = 0; mask < (1 << len1); mask++) {
		for(int bit = 0; bit < len1; bit++){
			if(mask & (1 << bit)) {
				// When bit is on
				// Use array[bit]
			} else {
				// Bit is off
				// Use array[bit]
			}
		}
		// Save answers in vector, etc
	}
 
 	// Getting second part
	for(int mask = 0; mask < (1 << len2); mask++) {
		for(int bit = 0; bit < len2; bit++) {
			if(mask & (1 << bit)) {
				// When bit is on
				// Use array[len1 + bit]
			}
			else {
				// When bit is off
				// Use array[len1 + bit]
			}
		}
		// Find best answer using first part
		// Best answer can be find out of this for
		findBestAnwer();
	}
}