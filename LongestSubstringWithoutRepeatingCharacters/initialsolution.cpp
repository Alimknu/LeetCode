#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> map;

        int res = 0;
        int l = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            if (map.find(c) != map.end() && map[c] >= l)
            {
                l = map[c] + 1;
            }

            map[c] = i;
            res = max(res, i - l + 1);
        }

        return res;
    }
};
