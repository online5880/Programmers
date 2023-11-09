#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = -1;
    int count = 0;
    for (int n : num_list)
    {
        if (n < 0)
        {
            return count;
        }
        count++;
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
