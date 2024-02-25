#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        if (nums.front() > 0)
            return ans;

        for (auto i = 0; i < nums.size(); ++i)
        {
            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            auto low = i + 1;
            auto high = nums.size() - 1;

            while (low < high)
            {
                auto sum = nums[i] + nums[low] + nums[high];

                if (sum == 0)
                {
                    ans.push_back({ nums[i], nums[low], nums[high] });

                    auto lastLow = nums[low];
                    auto lastHigh = nums[high];

                    while (low < high && nums[low] == lastLow)
                    {
                        ++low;
                    }

                    while (low < high && nums[high] == lastHigh)
                    {
                        --high;
                    }

                    continue;
                }

                if (sum > 0)
                {
                    --high;
                }
                else
                {
                    ++low;
                }

            }
        }
        return ans;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
