#include <vector>
using namespace std;

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        int i = 0;

        while (i < nums.size())
        {
            int j = i + 1;

            while (j < nums.size())
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
                j++;
            }
            i++;
        }

        return false;
    }
};
