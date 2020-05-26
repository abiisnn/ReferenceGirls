int main() {
	vector<lli> v = {100, 150, 150, 180, 200};
	std::pair<std::vector<lli>::iterator,
              std::vector<lli>::iterator> bounds;
    lli target = 150;
    bounds = std::equal_range(v.begin(), v.end(), target);	
    if(bounds.first != v.end()) { // If exist
    	if((*bounds.first) == target) { // Just for frecuency
			int lowerBound = bounds.first - v.begin();
			int upperBound = bounds.second - v.begin();
			int frecuency = upperBound - lowerBound;
		}
	}
}

