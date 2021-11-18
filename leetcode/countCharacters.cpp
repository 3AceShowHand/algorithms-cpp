//
// Created by Edison King on 2021/3/24.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool match(const string& w, vector<int> memo) {
    for (const auto& c: w) {
        if (!memo[c - 'a']) {
            return false;
        }
        memo[c - 'a']--;
    }
    return true;
}

int countCharacters(vector<string>& words, string chars) {
    vector<int> memo(26, 0);
    for (const auto& c: chars) {
        memo[c - 'a'] += 1;
    }

    int result = 0;
    for (const auto& w: words) {
        if (match(w, memo)) {
            result += w.size();
        }
    }

    return result;
}


int main() {
    vector<string> words {"cat","bt","hat","tree"};
    string chars{"atach"};

    cout << countCharacters(words, chars) << endl;

    return 0;
}
