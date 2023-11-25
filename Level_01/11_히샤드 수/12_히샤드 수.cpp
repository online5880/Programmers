#include <iostream>
#include <string>
using namespace std;

bool solution(int x) {
    bool answer = true;
    string str = to_string(x);
    int temp = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        int n = str[i] - 48;
        temp += n;
    }
    return x % temp == 0;
}
int main()
{
    std::cout << "Hello World!\n";
}
