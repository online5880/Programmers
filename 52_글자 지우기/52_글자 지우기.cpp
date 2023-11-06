#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = my_string;
    sort(indices.begin(), indices.end(), greater<>());
    int prev = 0;
    for (int n : indices)
    {
        answer.erase(n, 1);
    }

    return answer;
}

int main()
{
    vector<int> a = { 1, 16, 6, 15, 0, 10, 11, 3 };
    solution("apporoograpemmemprs",a);
}

