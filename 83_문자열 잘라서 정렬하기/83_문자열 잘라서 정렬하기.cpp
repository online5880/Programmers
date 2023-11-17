#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    for (auto& c : myString)
    {
        if (c == 'x')
        {
            c = ' ';
        }
    }
    stringstream ss(myString);
    string str;
    while (ss >> str)
    {
        answer.emplace_back(str);
    }
    sort(answer.begin(), answer.end());

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
