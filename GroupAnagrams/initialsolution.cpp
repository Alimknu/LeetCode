#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, int> hashMap;
        vector<vector<string>> sublist;

        for (int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());

            if (hashMap.count(s))
            {
                sublist[(hashMap[s])].push_back(strs[i]);
            }
            else
            {
                int index = 0;
                sublist.push_back({strs[i]});
                for (int j = 0; j < sublist.size(); j++)
                {
                    if (sublist[j][0] == strs[i])
                    {
                        index = j;
                    }
                }
                hashMap.insert({s, index});
            }
        }

        return sublist;
    }
};
