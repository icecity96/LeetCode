class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> digit;
        string result="";
       	k -= 1;
       	for (int i = 1; i <= n; ++i) {
       		digit.push_back(i);
       	}
       	while ( digit.size() ) {
       		int fac=1;
       		for(int i=2;i<digit.size();i++) fac*=i;
       		int m = k / fac;
       		k %= fac;
       		result += to_string(digit[m]);
       		digit.erase(digit.begin()+m);
       	}
       	return result;
    }
};
