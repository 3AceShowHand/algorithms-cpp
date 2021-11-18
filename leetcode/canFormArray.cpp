//
// Created by Edison King on 2021/3/24.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
    unordered_map<int, vector<int>> memo;
    for (const auto& item: pieces) {
        memo[item[0]] = item;
    }

    int i = 0;
    while (i != arr.size()) {
        auto iter = memo.find(arr[i]);
        if (iter == memo.end()) {
            return false;
        }
        if (iter->second.size() > arr.size() - i) {
            return false;
        }
        for (const auto& item: iter->second) {
            if (item != arr[i]) {
                return false;
            }
            ++i;
        }
    }

    return true;
}

int main() {
    vector<int> arr{91, 4, 64, 78};
    vector<vector<int>> pieces {{78}, {4, 64}, {91}};
    cout << canFormArray(arr, pieces) << endl;

    arr = {1, 3, 4};
    pieces = {{3, 1, 4}};
    cout << canFormArray(arr, pieces) << endl;

    return 0;
}
