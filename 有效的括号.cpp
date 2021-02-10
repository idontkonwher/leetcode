#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    stk.push('0');//避免只有一个字符导致读取无效
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stk.push(s[i]);
            continue;
        }
        switch (s[i])
        {
        case ')':
            if (stk.top() != '(')
                return false;
            break;
        case ']':
            if (stk.top() != '[')
                return false;
            break;
        case '}':
            if (stk.top() != '{')
                return false;
            break;
        default:
            break;
        }
        stk.pop();
    }
    if (stk.size() != 1)
        return false;
    return true;
}

int main()
{
    string s = "()[]{}";
    cout << isValid(s);
}