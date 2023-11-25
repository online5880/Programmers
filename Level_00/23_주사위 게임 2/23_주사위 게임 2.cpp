#include <cmath>
#include <set>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 1;
    vector<int> intArr;
    intArr.emplace_back(a);
    intArr.emplace_back(b);
    intArr.emplace_back(c);

    int count = 0;

    for (int i = 0; i < intArr.size(); ++i)
    {
        for (const int num : intArr)
        {
            if (intArr[i] != num)
            {
                count++;
            }
        }
    }
    const int result = count / 3;
    if (result == 0)
    {
        for (int i = 1; i < 4; ++i)
        {
            answer *= pow(a, i) + (pow(b, i) + (pow(c, i)));
        }
    }
    else if (result == 1)
    {
        for (int i = 1; i < 3; ++i)
        {
            answer *= pow(a, i) + (pow(b, i) + (pow(c, i)));
        }
    }
    else
    {
        answer += (a + b + c);
        answer -= 1;
    }

    return answer;
}

// 다른 사람 풀이
/*
int solution(int a, int b, int c)
{
    set<int> s{ a, b, c };
    if (s.size() == 3)
        return a + b + c;
    if (s.size() == 2)
        return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
    if (s.size() == 1)
        return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) * (pow(a, 3) + pow(b, 3) + pow(c, 3));
}
*/