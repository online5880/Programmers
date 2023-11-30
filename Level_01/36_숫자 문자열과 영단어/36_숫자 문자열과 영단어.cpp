#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer = "";
    string temp;
    vector<string> str = { "zero","one","two","three","four","five","six","seven","eight",                               "nine" };
    const vector<string> numbers = { "0","1","2","3","4","5","6","7","8","9" };
    for (auto c : s)
    {
        if (isdigit(c))
        {
            answer += c;
        }
        else
        {
            temp += c;
            if (temp.length() == 3 || temp.length() == 4 || temp.length() == 5)
            {
                if (find(str.begin(), str.end(), temp) != str.end())
                {
                    int index = find(str.begin(), str.end(), temp) - str.begin();
                    answer += numbers[index];
                    temp = "";
                }
            }
        }
    }

    return stoi(answer);
}

int main()
{
    std::cout << "Hello World!\n";
}

