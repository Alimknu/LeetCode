#include <vector>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int low = 0;
        int high = 0;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < prices[low])
            {
                low = i;
                high = i;
            }
            else if (prices[i] >= prices[high])
            {
                high = i;
            }

            if (prices[high] > prices[low])
            {
                profit = max(profit, (prices[high] - prices[low]));
            }
        }

        return profit;
    }
};
