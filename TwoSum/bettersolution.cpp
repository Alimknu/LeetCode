#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numsHash;

        for (int i = 0; i < nums.size(); i++)
        {
            int newTarget = target - nums[i];
            if (numsHash.count(newTarget))
            {
                return {numsHash[newTarget], i};
            }
            numsHash[nums[i]] = i;
        }
        return {0, 0}; // Could not find target value
    }
};
