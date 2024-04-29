
#include <vector>
using namespace std;

class Solution {

public:
    int minOperations(const vector<int>& input, int target) const {
        int xorAllElementsInInput = 0;
        for (const auto& value : input) {
            xorAllElementsInInput ^= value;
        }

        int minOperations = 0;
        while (xorAllElementsInInput > 0 || target > 0) {
            minOperations += (xorAllElementsInInput & 1) ^ (target & 1);
            xorAllElementsInInput = (xorAllElementsInInput >> 1);
            target = (target >> 1);
        }
        return minOperations;
    }
};
