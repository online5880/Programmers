#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gdc(int a, int b)
{
    if (b == 0) return a;
    return gdc(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gdc(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.emplace_back(gdc(n, m));
    answer.emplace_back(lcm(n, m));
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

