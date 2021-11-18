//
// Created by Edison King on 2021/3/9.
//

#include <vector>
#include <string>
#include <iostream>

using namespace std;

void solver(int n, int left, int right, string curr, vector<string>& result) {
    if (curr.size() == 2 * n) {
        result.push_back(curr);
        return;
    }

    if (left < n) {
        curr.push_back('(');
        solver(n, left + 1, right, curr, result);
        curr.pop_back();
    }

    if (right < left) {
        curr.push_back(')');
        solver(n, left, right + 1, curr, result);
        curr.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    solver(n, 0, 0, "", result);

    return result;
}

int main() {
    auto result = generateParenthesis(3);
    for (const auto& item : result) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
