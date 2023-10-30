#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (vector<int> query : queries)
    {
        for (int i = query[0]; i <= query[1]; ++i)
        {
            if (query[0] <= i && i <= query[1])
            {
                if (i % query[2] == 0)
                {
                    arr[i] += 1;
                }
            }
        }
    }
    return arr;
}

int main()
{
    std::cout << "Hello World!\n";
}