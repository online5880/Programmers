#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    return myString;
}

int main()
{
    std::cout << "Hello World!\n";
}

