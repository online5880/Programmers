#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
vector<string> solution(vector<string> players, vector<string> callings) {

    unordered_map<string, int> result;

    for (int i = 0; i < players.size(); ++i)
    {
        result[players[i]] = i;
        cout << result[players[i]];
    }

    for (const string& calling : callings)
    {
        int currentPosition = result[calling];
        if (currentPosition > 0)
        {
            swap(players[currentPosition], players[currentPosition - 1]);
            result[calling] = currentPosition - 1;
            result[players[currentPosition]] = currentPosition;
        }
    }
    return players;
}

int main(void)
{
    vector<string> players = { "mumu", "soe", "poe", "kai", "mine" };
    vector<string> callings = { "kai", "kai", "mine", "mine" };
    solution(players, callings);

    return 0;
}