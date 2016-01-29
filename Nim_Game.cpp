//using & is faster than % 
//explain if any number % 4 == 0
//the  binary of the number is XXXXXXX00
class Solution 
{
	public:
		bool canWinNim(int n)
		{
			return n&3;
		}
};
