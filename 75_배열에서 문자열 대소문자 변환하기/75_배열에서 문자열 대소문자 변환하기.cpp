#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0; i < strArr.size(); ++i)
    {
        if (i & 1)
        {
            transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::toupper);

        }
        else
        {
            transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::tolower);
        }
    }
    return strArr;
}

int main()
{
    std::cout << "Hello World!\n";
}

