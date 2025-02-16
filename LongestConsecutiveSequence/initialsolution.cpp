#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int highestCount = 1;
        int currentCount = 1;
        int n = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == n)
            {
                continue;
            }

            if (nums[i] == n + 1)
            {
                n += 1;
                currentCount++;
            }
            else
            {
                n = nums[i];
                currentCount = 1;
            }

            if (highestCount < currentCount)
            {
                highestCount = currentCount;
            }
        }

        return highestCount;
    }
};
