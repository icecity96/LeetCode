class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0;
        int blue = 0;
        for(auto i: nums)
        {
            if(i==0) {red++;continue;}
            if(i==1) {white++;continue;}
            blue++;
        }
        int j = 0;
        while(red != 0)
        {
            nums[j++] = 0;
            red--;
        }
        while(white != 0)
        {
            nums[j++] = 1;
            white--;
        }
        while(blue!=0)
        {
            blue--;
            nums[j++] = 2;
        }
    }
};
