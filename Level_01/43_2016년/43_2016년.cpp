#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int month[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    string day[] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
    int today = b;
    for (int i = 0; i < a - 1; ++i)
    {
        today += month[i];
    }
    return day[today % 7];
}

int main()
{
    std::cout << "Hello World!\n";
}
