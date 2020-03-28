// Return: index of the element or -1 if doesnt exists.
int binarySearch(vector<lli> &a, int l, int r, lli target) { // O(log(a.size()))
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if(a[mid] == target) return mid;
		if(a[mid] < target) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}