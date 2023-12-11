#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a)
    {
	    const int bottle = n / a * b;
        n %= a;
        answer += bottle;

        n += bottle;
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

