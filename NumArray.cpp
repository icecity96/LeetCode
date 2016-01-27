/*=========================================================
303. Range Sum Query - Immutable
Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.
time:600ms
=============================================================*/
class NumArray {
public:
	NumArray(vector<int>& nums)
	{
		int temp = 0;
		num.push_back(0);
		for (auto var : nums)
		{
			temp += var;
			num.push_back(temp);
		}
	}
	
	int sumRange(int i, int j) {
		return (num[j+1] - num[(i)]);
	}

	
private:
	vector<int> num;
};
/*===============================================================
best solution I think:(https://leetcode.com/discuss/70991/c-o-1-queries-just-2-extra-lines-of-code)
class NumArray {
public:
    NumArray(vector<int> &nums) : psum(nums.size()+1, 0) {
        partial_sum( nums.begin(), nums.end(), psum.begin()+1);
    }

    int sumRange(int i, int j) {
        return psum[j+1] - psum[i];
    }
private:
    vector<int> psum;    
};
==============================================================*/
