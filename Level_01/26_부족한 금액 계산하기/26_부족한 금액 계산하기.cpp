#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    for (int i = 1; i <= count; ++i)
    {
        answer += (price * i);
    }
    if (answer > money)
        answer -= money;
    else
    {
        answer = 0;
    }

    return answer;
}

// 다른 사람 풀이
/*typedef long long ll;

long long solution(int price, int money, int count)
{
    ll answer = (ll)(count * (count + 1) / 2) * price;
    return answer > money ? answer - money : 0;
}*/

int main()
{
    std::cout << "Hello World!\n";
}

