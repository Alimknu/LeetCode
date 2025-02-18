#include <string>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string res = "";

        for (char c : s)
        {
            if (isalnum(c))
            {
                res += char(tolower(c));
            }
        }

        for (int i = 0; i < res.length(); i++)
        {
            if (res[i] != res[res.length() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};
