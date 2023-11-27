#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.emplace_back(arr[0]);
    for (int i = 0; i < arr.size(); ++i)
    {
        if (answer.back() != arr[i])
            answer.emplace_back(arr[i]);
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
