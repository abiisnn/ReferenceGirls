#define MAX 100005 // MAX = 2 * |str| + 5
vector<int> bucket(MAX);
// Transform string to be used in Manacher's Algorithm 
string transform(string str) { // O(|str|)
	string newS((2 * str.size()) + 3, '#');
	newS[0] = '$';
	for(int i = 2, j = 0; i < newS.size(); i+=2, j++) newS[i] = str[j];
	newS[newS.size()-1] = '@';
	return newS;
}
/* Mancher's Algorithm: Bucket has the size of every 
   Palindromic Substring that can be formed. */
void manacher(string s) { // O(N)
	s = transform(s); 
	int C = 0, R = 0;
	fore(i, 1, s.size()-1) {
		int mirr = 2 * C - i;
		if(i < R) bucket[i] = min(R-i, bucket[mirr]);
		while(s[i + (1 + bucket[i])] == s[i - (1 + bucket[i])]) 
			bucket[i]++;
		if(i + bucket[i] > R) {
			C = i;
			R = i + bucket[i];
		}
	}
}
int main() {
	string str; cin >> str;
	manacher(str);
}