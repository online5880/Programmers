#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int aa = stoi(to_string(a) + to_string(b));
    int bb = 2 * a * b;
    answer = (aa >= bb) ? aa : bb;
    return answer;
}