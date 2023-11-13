#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (vector<int> query : queries)
    {
        for (int i = query[0]; i <= query[1]; ++i)
        {
            arr[i]++;
        }
    }
    return arr;
}

int main()
{
    std::cout << "Hello World!\n";
}
