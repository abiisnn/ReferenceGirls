int main() {
	optimizar_io
	vector<lli> v = {100, 150, 150, 180, 200};
	vector<lli>::iterator low = std::lower_bound(v.begin(), v.end(), 150); // pos = 1
    if(low != v.end()) {
    	cout << "Lower Bound: " << *(low) << endl;
    	cout << "Position: " << (low - v.begin()) << endl;
    } else cout << "No existe" << endl;
}