#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    if (arr.size() == 1)
    {
        answer.emplace_back(-1);
        return answer;
    }

    auto minElement = min_element(arr.begin(), arr.end());
    int index = distance(arr.begin(), minElement);
    arr.erase(arr.begin() + index);
    answer = arr;
    return answer;
}

// 다른 사람 풀이
/*vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) {
        return { -1 };
    }
    arr.erase(std::min_element(arr.begin(), arr.end()));
    return arr;
}*/

int main()
{
    std::cout << "Hello World!\n";
}
