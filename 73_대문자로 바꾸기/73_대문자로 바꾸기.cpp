#include <algorithm>
#include <iostream>
using namespace std;

string solution(string myString) {
    string answer = "";
    transform(myString.begin(), myString.end(), myString.begin(), ::toupper);
    return myString;
}

int main()
{
    std::cout << "Hello World!\n";
}