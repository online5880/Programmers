#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    for (int i = 0; i < query.size(); ++i)
    {
        if (i & 1)
        {
            // 홀수 인덱스에서 query[i]번 인덱스 앞부분을 잘라냄
            arr.erase(arr.begin(), arr.begin() + query[i]);

        }
        else
        {
            // 짝수 인덱스 query[i]번 인덱스 뒷부분을 잘라냄
            arr.erase(arr.begin() + query[i] + 1, arr.end());

        }
    }
    answer = arr;
    return answer;
}
int main()
{
    std::cout << "Hello World!\n";
}

