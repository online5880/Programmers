#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for (int i = a; i < included.size(); i = a + d)
    {
        if (included[i] == true)
        {
            answer += i;
        }
    }
    for (auto it = included.begin(); it != included.end(); ++it)
    {
	    
    }

    return answer;

    
};