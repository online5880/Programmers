#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    if (num == 1) { return 0; }
    for (int i = 1; i < 500; ++i)
    {
        if (num % 2 == 1)
        {
            num *= 3;
            num++;
        }
        else if (num % 2 == 0)
        {
            num *= 0.5;
        }

        if (num == 1) { return i; }
    }
    return -1;
}

int main()
{
    std::cout << "Hello World!\n";
}
