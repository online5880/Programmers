#include <iostream>

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for (int i = 0; i < queries.size(); ++i)
    {
        int tmp = answer[queries[i][0]];
        answer[queries[i][0]] = answer[queries[i][1]];
        answer[queries[i][1]] = tmp;
    }
    return answer;
}

// 다른 사람 풀이
/*
vector<int> solution(vector<int> arr, vector<vector<int>> queries) {

    for (const auto& q : queries)
    {
        swap(arr[q[0]], arr[q[1]]);
    }
    return arr;
}
*/