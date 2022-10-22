
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
    
public:
    bool containsNearbyDuplicate(const vector<int>& input, int target) const {
        unordered_set<int> uniqueValues;
        for (int i = 0; i < input.size(); ++i) {
            //C++20: uniqueValues.contains(input[i]), done the old way for compatibility
            if (uniqueValues.find(input[i]) != uniqueValues.end()) {
                return true;
            }
            uniqueValues.insert(input[i]);
            if (uniqueValues.size() > target) {
                uniqueValues.erase(input[i - target]);
            }
        }
        return false;
    }
};
