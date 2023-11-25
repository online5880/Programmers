#include <algorithm>
#include <iostream>
#include <regex>
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int size = phone_number.length() - 4;
    for (int i = 0; i < size; ++i)
    {
        phone_number[i] = '*';
    }
    return phone_number;
}

int main()
{
    std::cout << "Hello World!\n";
}
