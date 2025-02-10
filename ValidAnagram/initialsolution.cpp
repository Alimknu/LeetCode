#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> sSet, tSet;

        for (int i = 0; i < s.length(); i++)
        {
            sSet[s[i]]++;
            tSet[t[i]]++;
        }

        return sSet == tSet;
    }
};
