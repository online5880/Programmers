#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> score;

    for (int i = 0; i < name.size(); ++i)
    {
        score.emplace(name[i], yearning[i]);
    }

    for (const auto& p : photo)
    {
        int temp = 0;
        int count = 0;
        for (const auto& s : p)
        {
            if (auto search = score.find(s) != score.end())
            {
                temp += score[s];
            }
        }
        answer.emplace_back(temp);
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

