#include <string>
#include <vector>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    for (vector<int> n : queries)
    {
        reverse(my_string.begin() + n[0], my_string.begin() + n[1] + 1);
    }
    answer = my_string;
    return answer;
}