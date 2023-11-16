#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;

    stringstream ss(my_string);

    string str;

    while (ss >> str)
    {
        answer.emplace_back(str);
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

