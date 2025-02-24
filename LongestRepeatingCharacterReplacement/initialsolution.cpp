#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        unordered_map<char, int> map;

        int l = 0;
        int res = 0;

        int mostFrequent = 0;

        for (int i = 0; i < s.size(); i++)
        {
            map[s[i]]++;
            mostFrequent = max(mostFrequent, map[s[i]]);

            while (i - l + 1 - mostFrequent > k)
            {
                map[s[l]]--;
                l++;
            }

            res = max(res, i - l + 1);
        }

        return res;
    }
};
