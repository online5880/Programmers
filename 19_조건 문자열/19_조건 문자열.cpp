#include <iostream>

int solution(std::string ineq, std::string eq, int n, int m) {
    int answer = 0;
    char c[2];
    strcpy(c, (ineq + eq).c_str());
    if (strcmp(c, ">=") == 0)
    {
        answer = (n >= m);
    }
    else if (strcmp(c, "<=") == 0)
    {
        answer = (n <= m);
    }
    else if (strcmp(c, ">!") == 0)
    {
        answer = (n > m);
    }
    else
    {
        answer = (n < m);
    }
    return answer;
}
// 다른 사람 풀이
//int solution(string ineq, string eq, int n, int m) {
//    string oper = ineq + eq;
//    if (oper == "<=")
//    {
//        return n <= m;
//    }
//    else if (oper == ">=")
//    {
//        return n >= m;
//    }
//    else if (oper == "<!")
//    {
//        return n < m;
//    }
//    else if (oper == ">!")
//    {
//        return n > m;
//    }
//}
