#include <iostream>
#include <vector>
#include <string>

using namespace std;

string sortString(string s) {
    string result;
    vector<int> table(26, 0);
    for (const auto& c: s) {
        int index = c - 'a';
        table[index] += 1;
    }

    while (result.size() != s.size()) {
        for (int i = 0; i < table.size(); ++i) {
            if (table[i]) {
                result += ('a' + i);
                table[i] -= 1;
            }
        }
        for (int i = 25; i >= 0; --i) {
            if (table[i]) {
                result += ('a' + i);
                table[i] -= 1;
            }
        }
    }

    return result;
}

int main() {
    string s = "rat";
    cout << sortString(s) << endl;

    return 0;
}
