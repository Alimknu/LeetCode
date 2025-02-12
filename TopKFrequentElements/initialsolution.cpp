#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> hashMap;
        vector<int> res;
        for (int n : nums)
        {
            hashMap[n]++;
        }

        vector<pair<int, int>> frequent(hashMap.begin(), hashMap.end());

        sort(frequent.begin(), frequent.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second > b.second; });

        for (int i = 0; i < k; i++)
        {
            res.push_back(frequent[i].first);
        }

        return res;
    }
};
