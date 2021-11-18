//
// Created by Edison King on 2021/3/10.
//

#include <vector>
#include <iostream>

using namespace std;

void solver(const vector<vector<int>>& graph, int index, vector<int>& curr, vector<vector<int>>& result) {
    if (index == graph.size() - 1) {
        result.push_back(curr);
        return;
    }

    for (const auto& v : graph[index]) {
        curr.push_back(v);
        solver(graph, v, curr, result);
        curr.pop_back();
    }

}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<vector<int>> result;
    vector<int> curr{0};
    solver(graph, 0, curr, result);

    return result;
}

int main() {
    vector<vector<int>> graph{{1, 2}, {3}, {3}, {}};
    auto result = allPathsSourceTarget(graph);

    for (const auto& v: result) {
        for (const auto item: v) {
            cout << item << " ";
        }
        cout << endl;
    }

    graph = {{4, 3, 1}, {3, 2, 4}, {3}, {4}, {}};
    result = allPathsSourceTarget(graph);
    for (const auto& v: result) {
        for (const auto item: v) {
            cout << item << " ";
        }
        cout << endl;
    }


    return 0;
}
