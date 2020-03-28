// Return: index of the element or -1 if doesnt exists.
int binarySearch(vector<int> &a, int l, int r, int target) {
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if(a[mid] == target) return mid;
		if(a[mid] < target) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}

int main() {
	optimizar_io
	vector<int> a{10, 20, 30};
	cout << binarySearch(a, 0, a.size()-1, 30) << endl;
}