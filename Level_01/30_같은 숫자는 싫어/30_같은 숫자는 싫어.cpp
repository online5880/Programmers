#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.emplace_back(arr[0]);
    for (int& i : arr)
    {
        if (answer.back() != i)
            answer.emplace_back(i);
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
