#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> numsMap;

        for (int i = 0; i < nums.size(); i++)
        {
            numsMap[nums[i]]++;
            if (numsMap[nums[i]] > 1)
            {
                return true;
            }
        }

        return false;
    }
};
