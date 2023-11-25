#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < num_list.size(); ++i)
    {
        if (i & 1)
        {
            odd += num_list[i];
        }
        else
        {
            even += num_list[i];
        }
    }
    return (odd > even) ? odd : even;
}

int main()
{
    std::cout << "Hello World!\n";
}
