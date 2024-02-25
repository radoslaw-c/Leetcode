#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> translation;
        unordered_set<char> usedLetters;

        for (auto i = 0; i < s.size(); ++i)
        {
            auto letter_s = s[i];
            auto letter_t = t[i];

            if (usedLetters.find(letter_t) != usedLetters.end() && translation[letter_s] != letter_t)
                return false;


            if (translation[letter_s] != 0 && translation[letter_s] != letter_t)
                return false;



            translation[letter_s] = letter_t;
            usedLetters.insert(letter_t);
        }


        return true;
    }
};

int main()
{
    string s = "egg";
    string t = "add";
    Solution sol;
    auto res = sol.isIsomorphic(s, t);
}
