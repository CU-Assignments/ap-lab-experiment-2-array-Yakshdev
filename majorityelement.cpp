#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    cnt++;
                }
            }
            if (cnt > n / 2) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3};

    int result = sol.majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
