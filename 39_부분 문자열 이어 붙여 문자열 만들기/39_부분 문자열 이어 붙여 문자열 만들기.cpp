#include <iostream>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for (int i = 0; i < my_strings.size(); ++i)
    {
        for (int k = parts[i][0]; k <= parts[i][1]; ++k)
        {
            string temp;
            temp += my_strings[i][k];
            answer += temp;
        }
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

