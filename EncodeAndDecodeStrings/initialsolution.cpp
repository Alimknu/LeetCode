#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string res;
        for (string s : strs)
        {
            res.append(s + ';');
        }

        return res;
    }

    vector<string> decode(string s)
    {
        vector<string> res;
        string currentString;
        for (char c : s)
        {
            if (c == ';')
            {
                res.push_back(currentString);
                currentString = "";
            }
            else
            {
                currentString += c;
            }
        }

        return res;
    }
};
