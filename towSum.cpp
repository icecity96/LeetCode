class Solution{
       	public:
       		vector<int> twoSum(vector<int>& nums,int target)
       		{
       			unordered_map<int,int> a;
       			vector<int> result(2);
       			for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
       				if(a.find(nums.at(i)) != a.end())
       				{
       					result[0] = a.find(nums.at(i))->second;
       					result[1] = i;
       					return result;
       				}
       				else
       				{
       					a.insert(make_pair(target-nums.at(i),i));
       				}
       			}
       			return result;
       		}
};
