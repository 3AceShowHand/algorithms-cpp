#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numTeams(vector<int>& rating) {
    int result = 0;
    if (rating.size() < 3) {
        return result;
    }

    vector<int> lsmaller(rating.size(), 0);
    vector<int> llarger(rating.size(), 0);
    for (int i = 1; i < rating.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (rating[j] < rating[i]) {
                lsmaller[i]++;
            } else if (rating[j] > rating[i]) {
                llarger[i]++;
            }
        }
    }

    vector<int> rsmaller(rating.size(), 0);
    vector<int> rlarger(rating.size(), 0);
    for (int i = rating.size() - 2; i >= 0; --i) {
        for (int j = i + 1; j < rating.size(); ++j) {
            if (rating[j] > rating[i]) {
                rlarger[i]++;
            } else if (rating[j] < rating[i]) {
                rsmaller[i]++;
            }
        }
    }

    for (int i = 0; i < rating.size(); ++i) {
        result += lsmaller[i] * rlarger[i] + llarger[i] * rsmaller[i];
    }

    return result;
}

int main() {
    vector<int> rating{2, 5, 3, 4, 1};
    int result = numTeams(rating);
    cout << result << endl;
    return 0;
}
