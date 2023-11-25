#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_set<int> us;
    for (int n : arr)
    {
        if (us.find(n) == us.end())
        {
            us.insert(n);
            answer.emplace_back(n);
        }
        if (answer.size() == k)
        {
            break;
        }
    }
    while (answer.size() < k)
    {
        answer.emplace_back(-1);
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
