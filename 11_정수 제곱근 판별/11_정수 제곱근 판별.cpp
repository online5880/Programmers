#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    for (long long i = 1; i <= n; ++i)
    {
        if (pow(i, 2) == n)
        {
            return pow(i + 1, 2);
        }
    }
    return -1;
}

int main()
{
    std::cout << "Hello World!\n";
}
