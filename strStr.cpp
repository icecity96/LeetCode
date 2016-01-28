//using this way was download in leetcode,People use KMP to solve
//this question,but I think using built-in function is ok..and later I will
//push my KMP 

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class Solution {
	public:
		int strStr(string haystack,string needle){
			int f = haystack.find(needle);
			return f==string::npos?-1:f;
		}
};

int main(int argc, char **argv) {
	Solution a;
	cout<<a.strStr("sdhfjasfhj","jas")<<endl;
	return 0;
}
