#include <algorithm>
#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);
    if (myString.find(pat) != string::npos)
    {
        return 1;
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
