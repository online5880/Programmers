#include <algorithm>
#include <iostream>

std::string solution(std::string s) {
	std::string answer = "";
    sort(s.begin(), s.end(), std::greater<>());
    return s;
}

int main()
{
    std::cout << "Hello World!\n";
}

