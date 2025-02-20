#include <vector>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &heights)
    {
        int l = 0;
        int r = heights.size() - 1;
        int maxArea = 0;
        while (l < r)
        {
            int res = (r - l) * min(heights[l], heights[r]);

            if (res > maxArea)
            {
                maxArea = res;
            }

            if (heights[l] < heights[r])
            {
                l++;
            }
            else if (heights[l] >= heights[r])
            {
                r--;
            }
        }

        return maxArea;
    }
};
