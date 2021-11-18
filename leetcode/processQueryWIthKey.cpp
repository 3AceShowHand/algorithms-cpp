//
// Created by Edison King on 2021/3/9.
//

#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> processQueries(const vector<int>& queries, int m) {
    vector<int> result;
    map<int, int> memo;
    for (int i = 0; i < m; ++i) {
        memo[i + 1] = i;
    }

    for (const auto& q : queries) {
        result.push_back(memo[q]);
        for (auto& kv : memo) {
            if (kv.second >= memo[q]) {
                continue;
            }
            kv.second++;
        }
        memo[q] = 0;
    }

    return result;
}

int main() {

    const vector<int> queries{3, 1, 2, 1};
    auto result = processQueries(queries, 5);

    for (const auto& item : result) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
