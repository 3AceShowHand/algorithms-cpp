#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int bitCount(int n) {
    int result = 0;
    while (n) {
        result += (n % 2);
        n /= 2;
    }

    return result;
}

vector<int> sortByBits(vector<int>& arr) {
    sort(arr.begin(), arr.end(), [](const int& a, const int& b) {
        if (bitCount(a) < bitCount(b)) {
            return true;
        }
        return bitCount(a) == bitCount(b) && a < b;
    });

    return arr;
}

int main() {
    vector<int> nums{0, 1, 2, 3, 4, 5, 6, 7, 8};
    auto result = sortByBits(nums);
    for (const auto& item: result) {
        cout << item << " ";
    }
    cout << endl;

    nums = {2, 3, 5, 7, 11, 13, 17, 19};
    result = sortByBits(nums);
    for (const auto& item: result) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
