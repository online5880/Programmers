#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int INDEX;

bool cmp(string a, string b)
{
    if (a[INDEX] == b[INDEX])
    {
        return a < b;
    }
    else
    {
        return a[INDEX] < b[INDEX];
    }
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    INDEX = n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}

int main()
{
    std::cout << "Hello World!\n";
}

