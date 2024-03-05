#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diffs;

        for (auto i = 0; i < nums.size(); ++i)
        {
            diffs[target - nums[i]] = i;
        }

        for (auto i = 0; i < nums.size(); ++i)
        {
            auto num = nums[i];
            auto it = diffs.find(num);
            if (it != diffs.end() && (*it).second != i)
            {
                return { (*it).second, i };
            }
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> vec{ 3, 2, 4 };
    auto ans = sol.twoSum(vec, 6);
}
