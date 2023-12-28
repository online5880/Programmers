#include <iostream>
#include <set>
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    set<int> unique_ponkemon;
    for (int n : nums)
    {
        unique_ponkemon.emplace(n);
    }

    return min(unique_ponkemon.size(), nums.size() / 2);
}

int main()
{
    std::cout << "Hello World!\n";
}
