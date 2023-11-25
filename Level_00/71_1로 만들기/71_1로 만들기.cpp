#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for (int n : num_list)
    {
        int temp = n;
        while (temp != 1)
        {
            if (temp & 1)
            {
                temp = (temp - 1) / 2;
            }
            else
            {
                temp /= 2;
            }
            answer++;
        }

    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}