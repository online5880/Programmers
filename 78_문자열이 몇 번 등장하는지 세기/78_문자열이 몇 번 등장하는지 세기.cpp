#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for (int i = 0; i < myString.length(); ++i)
    {
        if (myString.substr(i, pat.size()) == pat)
        {
            ++answer;
        }
    }
    return answer;

}

int main()
{
    std::cout << "Hello World!\n";
}
