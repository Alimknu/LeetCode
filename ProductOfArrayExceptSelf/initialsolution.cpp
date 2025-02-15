#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> output;

        int zeroCount = 0;
        int totalProduct = 1;

        for (int n : nums)
        {
            if (n == 0)
            {
                zeroCount++;
                if (zeroCount > 1)
                {
                    totalProduct = 0;
                    break;
                }
                continue;
            }
            totalProduct *= n;
        }

        for (int n : nums)
        {
            if (n == 0)
            {
                output.push_back(totalProduct);
                continue;
            }
            else if (zeroCount >= 1)
            {
                output.push_back(0);
                continue;
            }

            output.push_back(totalProduct / n);
        }

        return output;
    }
};
