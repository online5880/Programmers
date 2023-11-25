#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool result;
    while (true)
    {
        result = false;
        for (int i = 0; i < arr.size(); ++i)
        {
            if (arr[i] & 1 && 50 > arr[i])
            {
                arr[i] *= 2;
                arr[i]++;
                result = true;
            }
            else if (arr[i] % 2 == 0 && arr[i] >= 50)
            {
                arr[i] *= 0.5f;
                result = true;
            }
        }
        if (result == false) break;
        answer++;
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
