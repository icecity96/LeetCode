//24ms
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
inline bool iszero(int a){return !a;}
class Solution {
	public:
		void moveZeroes(vector<int>& nums) {
			auto iter = remove_if(nums.begin(),nums.end(),iszero);
			for(auto i = iter; i != nums.end(); ++i)
			{
				*i = 0;
			}
		}
};
int main(int argc, char **argv) {
	Solution a;
	vector<int> nums = {0,1,0,3,12};
	a.moveZeroes(nums);
	for(auto x:nums)
	{
		cout << x << " ";
	}
	cout << endl;
	return 0;
}
