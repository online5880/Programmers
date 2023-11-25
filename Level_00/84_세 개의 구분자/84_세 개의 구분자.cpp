#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    for (auto& c : myStr)
    {
        if (c == 'a' || c == 'b' || c == 'c')
        {
            c = ' ';
        }
    }

    stringstream ss(myStr);
    string str;
    while (ss >> str)
    {
        answer.emplace_back(str);
    }
    if (answer.empty())
    {
        answer.emplace_back("EMPTY");
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
