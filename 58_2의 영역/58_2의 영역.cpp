#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int first = -1;
    int last = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == 2 && first == -1)
        {
            first = i;
        }
        else if (arr[i] == 2 && first != -1)
        {
            last = i;
        }
    }
    if (first != -1 && last != 0)
    {
        for (int i = first; i <= last; ++i)
        {
            answer.emplace_back(arr[i]);
        }
        return answer;
    }
    else if (first != -1 && last == 0)
    {
        answer.emplace_back(arr[first]);
        return answer;
    }
    answer.emplace_back(first);
    return answer;
};

// 다른 사람 풀이
//vector<int> solution(vector<int> arr) {
//    auto pos_a = find(arr.begin(), arr.end(), 2);
//    auto pos_b = find(arr.rbegin(), arr.rend(), 2).base();
//    vector<int> answer;
//    if (pos_a == arr.end()) {
//        answer.emplace_back(-1);
//    }
//    else {
//        answer.insert(answer.end(), pos_a, pos_b);
//    }
//    return answer;
//}

int main()
{
    std::cout << "Hello World!\n";
}

