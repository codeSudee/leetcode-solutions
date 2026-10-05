#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> charSet;
        int maxLength = 0;
        int left = 0;
        int n = s.length();

        for (int right = 0; right < n; right++) {
            
            while (charSet.count(s[right])) {
                charSet.erase(s[left]);
                left++;
            }
            
            charSet.insert(s[right]);
            
            
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};