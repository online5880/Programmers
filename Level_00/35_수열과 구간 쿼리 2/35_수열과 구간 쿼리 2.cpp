#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (vector<int>& query : queries)
    {
        int value = 10000001;
        for (int i = query[0]; i <= query[1]; ++i)
        {
            if (arr[i] > query[2] && arr[i] < value)
            {
                value = arr[i];
            }
        }
        if (value == 10000001) value = -1;
        answer.emplace_back(value);
    }
    return answer;
}