#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> first{ 1,2,3,4,5 };
    vector<int> second{ 2,1,2,3,2,4,2,5 };
    vector<int> third{ 3,3,1,1,2,2,4,4,5,5 };

    vector<int> score(3, 0);

    for (int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == first[i % first.size()])
        {
            score[0]++;
        }
        if (answers[i] == second[i % second.size()])
        {
            score[1]++;
        }
        if (answers[i] == third[i % third.size()])
        {
            score[2]++;
        }
    }

    int maxScore = *max(score.begin(), score.end());

    for (int i = 0; i < 3; ++i)
    {
        if (score[i] == maxScore)
        {
            answer.emplace_back(i + 1);
        }
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
