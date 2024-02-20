#include <iostream>
#include <vector>

class Solution
{
public:
    int majorityElement(std::vector<int>& nums)
    {
        auto minOccur = static_cast<float>(nums.size()) / 2;

        for (auto& num : nums)
        {
            if (std::count(nums.begin(), nums.end(), num) >= minOccur)
                return num;
        }
    }
};

int main()
{
    std::vector<int> sampleVector = { 3, 2, 3 };
    auto solution = Solution();
    solution.majorityElement(sampleVector);
}
