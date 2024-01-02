#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int j = 0, k = 0;
    for (int i = 0; i < goal.size(); ++i)
    {
        if (goal[i] == cards1[j])
        {
            j++;
            continue;
        }
        else if (goal[i] == cards2[k])
        {
            k++;
            continue;
        }
        else
        {
            answer = "No";
            return answer;
        }
    }
    answer = "Yes";
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
