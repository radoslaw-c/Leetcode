#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto pt1 = 0;
        auto pt2 = numbers.size() - 1;

        vector<int> idx;
        idx.resize(2);

        while (pt1 < pt2)
        {
            auto sum = numbers[pt1] + numbers[pt2];
            if (sum == target)
                break;

            if (sum > target)
            {
                --pt2;
                continue;
            }
            else
            {
                ++pt1;
                continue;
            }
        }
        idx[0] = pt1 + 1;
        idx[1] = pt2 + 1;

        return idx;
    }
};

int main()
{


    
}
