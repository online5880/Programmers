#include <iostream>
#include <string>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;

    for (auto c : s)
    {
        if (c == 'P' || c == 'p')
        {
            p++;
        }
        if (c == 'Y' || c == 'y')
        {
            y++;
        }
    }
    cout << "Hello Cpp" << endl;

    return p == y ? true : false;
}

int main()
{
    std::cout << "Hello World!\n";
}
