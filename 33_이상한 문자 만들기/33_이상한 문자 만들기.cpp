#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    for (char& i : s)
    {
        if (i == ' ')
        {
            index = 0;
            continue;
        }
        i = index & 1 ? (char)tolower(i) : (char)toupper(i);
        index++;
    }
}

int main()
{
    std::cout << "Hello World!\n";
}
