int main() {
	optimizar_io
	vector<lli> v = {100, 150, 150, 180, 200};
	vector<lli>::iterator upper = std::upper_bound(v.begin(), v.end(), 150); // ans = 180
    if(upper != v.end()) {
    	cout << "Upper Bound: " << *(upper) << endl;
    	cout << "Position: " << (upper - v.begin()) << endl;
    } else cout << "No existe" << endl;
}