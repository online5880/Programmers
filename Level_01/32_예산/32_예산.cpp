#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    for (const int i : d)
    {
        if (budget < i)
        {
            break;
        }
        budget -= i;
        answer++;
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
