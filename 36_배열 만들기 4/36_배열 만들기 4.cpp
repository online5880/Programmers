#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;

    for (i; i < arr.size();)
    {
        if (stk.empty())
        {
            stk.emplace_back(arr[i]);
            ++i;
        }
        else
        {
            if (stk[stk.size() - 1] < arr[i])
            {
                stk.emplace_back(arr[i]);
                ++i;
                continue;
            }
            if (stk[stk.size() - 1] >= arr[i])
            {
                stk.pop_back();
            }
        }
    }
    return stk;
}

/*
vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    while (i < arr.size()) {
        if (stk.empty()) stk.push_back(arr[i++]);
        else if (stk.back() < arr[i]) stk.push_back(arr[i++]);
        else stk.erase(stk.end() - 1);
    }
    return stk;
}
*/