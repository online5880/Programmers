#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> three;
    int temp = n;
    while (temp)
    {
        three.emplace_back(temp % 3);
        temp /= 3;
    }
    reverse(three.begin(), three.end());
    int m = 1;
    for (int i : three)
    {
        answer += (i * m);
        m *= 3;
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
