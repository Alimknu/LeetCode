#include <vector>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int size = height.size();
        int waterTrapped = 0;

        vector<int> l(size);
        vector<int> r(size);

        l[0] = height[0];
        for (int i = 1; i < size; i++)
        {
            l[i] = max(l[i - 1], height[i]);
        }

        r[size - 1] = height[size - 1];
        for (int i = size - 2; i >= 0; i--)
        {
            r[i] = max(r[i + 1], height[i]);
        }

        for (int i = 0; i < size; i++)
        {
            waterTrapped += min(l[i], r[i]) - height[i];
        }

        return waterTrapped;
    }
};
