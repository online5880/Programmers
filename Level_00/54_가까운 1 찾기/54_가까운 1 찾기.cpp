#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;

    if (arr[idx] == 1)
    {
        return idx;
    }
    else
    {
        for (int i = 0; i < arr.size(); ++i)
        {
            if (arr[i] == 1 && i > idx)
            {
                return i;
            }
        }
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}