//
// Created by Edison King on 2021/3/24.
//

#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> accumulative_sum(const vector<int>& nums) {
    vector<int> result;
    int curr = 0;
    for (int i = 0; i < nums.size(); ++i) {
        curr += nums[i];
        result.push_back(curr);
    }

    return result;
}

int minStartValue(vector<int>& nums) {
    auto sums = accumulative_sum(nums);
    int result = *min_element(sums.begin(), sums.end());
    if (result > 0) {
        return 1;
    }

    return abs(result) + 1;
}

int main() {

    vector<int> nums{-3, 2, -3, 4, 2};
    cout << minStartValue(nums) << endl;

    return 0;
}
