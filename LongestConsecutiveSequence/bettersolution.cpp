#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int highestCount = 0;
        for (int n : numSet)
        {
            if (numSet.find(n - 1) == numSet.end())
            {
                int currentCount = 1;
                while (numSet.find(n + 1) != numSet.end())
                {
                    currentCount++;
                    n++;
                }
                highestCount = max(highestCount, currentCount);
            }
        }

        return highestCount;
    }
};
