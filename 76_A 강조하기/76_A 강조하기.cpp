#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (char& c : myString)
    {
        if (c == 'a')
        {
            c = 'A';
        }
        else if (c != 'A')
        {
            c = tolower(c);
        }
    }
    return myString;
}

int main()
{
    std::cout << "Hello World!\n";
}
